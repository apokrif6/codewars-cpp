//Write a function that accepts an integer n and a string s as parameters, and returns a string of s repeated exactly n times.

#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::string result;
  
  for (int i = 0; i < repeat; i++) {
    result = result + str;
  }
  
  return result;
}
