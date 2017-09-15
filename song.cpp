#include "song.h"

Song::Song(std::string filePath)
{
	readFile(filePath);
}

std::string Song::getContents()
{
	return contents;
}

std::string Song::getLineWithSyllables(int numberOfSyllables)
{
  std::stringstream ss(contents);
  std::string item;

  while(std::getline(ss, item, '\n'))
  {
    std::stringstream linestream(item);
    std::string word;
    int syllables = 0;

    while(std::getline(linestream, word, ' '))
    {
      syllables += calculateSyllables(word);
    }

    if(syllables == numberOfSyllables)
      return item;
  }

  return "";
}

int Song::calculateSyllables(std::string line)
{
	std::regex word_regex("/[aiouy]+e*|e(?!d$|ly).|[td]ed|le$/");
	auto words_begin = 
		std::sregex_iterator(line.begin(), line.end(), word_regex);
	auto words_end = std::sregex_iterator();

	return std::distance(words_begin, words_end) + 1;
}

void Song::readFile(std::string filePath)
{
	std::ifstream reader(filePath);
	std::stringstream buffer;
	buffer << reader.rdbuf();
	contents = buffer.str();
}
