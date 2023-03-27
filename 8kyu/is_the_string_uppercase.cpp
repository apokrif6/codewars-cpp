//Is the string uppercase?
//Task

//Create a method to see whether the string is ALL CAPS.
//Examples (input -> output)

//"c" -> False
//"C" -> True
//"hello I AM DONALD" -> False
//"HELLO I AM DONALD" -> True
//"ACSKLDFJSgSKLDFJSKLDFJ" -> False
//"ACSKLDFJSGSKLDFJSKLDFJ" -> True

//In this Kata, a string is said to be in ALL CAPS whenever it does not contain any lowercase letter so any string containing no letters at all is trivially considered to be in ALL CAPS.

#include <string>


bool is_uppercase(const std::string &s) {
  for (int i = 0; i < s.size(); i++)
  {
    if (std::islower(s[i]))
      return false;
  }
  
  return true;
}

//OR

#include <string>
#include <algorithm>

bool is_uppercase(const std::string &s) {
  return std::none_of(s.begin(), s.end(), islower);
}
