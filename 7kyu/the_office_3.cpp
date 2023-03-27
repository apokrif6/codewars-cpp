//The bloody photocopier is broken... Just as you were sneaking around the office to print off your favourite binary code!

//Instead of copying the original, it reverses it: '1' becomes '0' and vice versa.

//Given a string of binary, return the version the photocopier gives you as a string.

#include <string>

std::string broken(const std::string& inp) {
  std::string result;
  
  for (const char& c: inp)
  {
    result += c == '1' ? '0' : '1';
  }
  
  return result;
}
