//Given a string made up of letters a, b, and/or c, switch the position of letters a and b (change a to b and vice versa). Leave any incidence of c untouched.

//Example:

//'acb' --> 'bca'
//'aabacbaa' --> 'bbabcabb'

#include <string>

std::string switcheroo(const std::string &s) {
  std::string result;

  for (auto c: s) {
    if (c == 'a') {
      result = result + 'b';
    }
    if (c == 'b') {
      result = result + 'a';
    }
    if (c == 'c') {
      result = result + 'c';
    }
  }
  
  return result;
}

//OR

#include <string>
#include <algorithm>

std::string switcheroo(const std::string &s) {
  std::string reversed = s;

  transform(reversed.begin(), reversed.end(), reversed.begin(), [](char c) {
    return c == 'a' ? 'b' : c == 'b' ? 'a' : c;
  });

  return reversed;
}
