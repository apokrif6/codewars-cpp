//Write a function that takes a string and returns an array containing binary numbers equivalent to the ASCII codes of the characters of the string. The binary strings should be eight digits long.

//Example: 'man' should return [ '01101101', '01100001', '01101110' ]

#include <vector>
#include <string>
#include <bitset>

std::vector<std::string> word_to_bin(std::string word) {
  std::vector<std::string> result;
  
  for (const char& c : word)
  {
      result.push_back(std::bitset<8>(c).to_string());
  }
  
  return result;
}
