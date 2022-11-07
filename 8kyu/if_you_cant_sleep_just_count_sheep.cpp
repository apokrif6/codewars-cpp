//If you can't sleep, just count sheep!!
//Task:

//Given a non-negative integer, 3 for example, return a string with a murmur: "1 sheep...2 sheep...3 sheep...". Input will always be valid, i.e. no negative integers.

#include <string>

std::string countSheep(int number) {
  std::string result;
  
  for (int i = 0; i < number; i++) {
    result += std::to_string(i+1) + " sheep...";
  }
  
  return result;
}
