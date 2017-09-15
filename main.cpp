#include <iostream>
#include "song.h"

int main()
{
  Song songOne("/Users/dennyscott/Development/cpp_primer/for_fun/songOne.txt");
  Song songTwo("/Users/dennyscott/Development/cpp_primer/for_fun/songTwo.txt");
  Song songThree("/Users/dennyscott/Development/cpp_primer/for_fun/songThree.txt");

  std::string lineOne = songOne.getLineWithSyllables(5);
  std::string lineTwo = songTwo.getLineWithSyllables(7);
  std::string lineThree = songThree.getLineWithSyllables(5);

  std::cout << lineOne << std::endl << lineTwo << std::endl << lineThree << std::endl;

  return 0;
}
