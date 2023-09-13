//In this kata, you need to write a function that takes a string and a letter as input and then returns the index of the second occurrence of that letter in the string. If there is no such letter in the string, then the function should return -1. If the letter occurs only once in the string, then -1 should also be returned.

//Examples:

//secondSymbol('Hello world!!!','l') --> 3
//secondSymbol('Hello world!!!', 'A') --> -1

#include <string>

int secondSymbol(const std::string& str, char symbol) {
  return str.find(symbol, str.find(symbol) + 1);
}

//OR

#include <string>

int secondSymbol(const std::string& str, char symbol) {
  std::map<char, int> found;
  
  for (int i = 0; i < str.size(); ++i) {
    found[str[i]]++;
    
    if (found[str[i]] == 2)
      return i;
  }
  
  return -1;
}
