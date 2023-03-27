//Complete the solution so that it returns a formatted string. The return value should equal "Value is VALUE" where value is a 5 digit padded number.

//Example:

//solution(5); // should return "Value is 00005"

#include <string>

std::string solution(int n) {
  std::string str = "00000";
  str += std::to_string(n);
  
  return "Value is " + str.substr(str.length() - 5, 5);
}
