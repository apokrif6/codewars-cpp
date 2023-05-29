//Given a mixed array of number and string representations of integers, add up the non-string integers and subtract the total of the string integers.

//Return as a number.

#include <vector>
#include <variant>
#include <iostream>

int divCon(const std::vector<std::variant<int, char>>& x) {
  int intSum = 0, stringSum = 0;
  
  for (auto number : x) {
    if (number.index() == 0) {
      intSum += std::get<0>(number);
    } else {
      stringSum += (std::get<1>(number) - '0');
    }
  }
  
  return intSum - stringSum;
}
