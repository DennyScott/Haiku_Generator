#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iterator>
#include <regex>

class Song {
  public:
    Song(std::string filePath);
    std::string getContents();
    std::string getLineWithSyllables(int numberOfSyllables);
  private:
    std::string contents;
    void readFile(std::string filePath);
    int calculateSyllables(std::string line);
};

 
