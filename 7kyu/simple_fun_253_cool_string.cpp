//Task

//Let's call a string cool if it is formed only by Latin letters and no two lowercase and no two uppercase letters are in adjacent positions. Given a string, check if it is cool.
//Input/Output

//[input] string s

//A string that contains uppercase letters, lowercase letters numbers and spaces.

//1 ≤ s.length ≤ 20.

//[output] a boolean value

//true if s is cool, false otherwise.
//Example

//For s = "aQwFdA", the output should be true

//For s = "aBC", the output should be false;

//For s = "AaA", the output should be true;

//For s = "q q", the output should be false.

#include <string>

bool cool_string(const std::string& s) {
  for (size_t i = 0; i < s.size(); ++i) {
    if (!isalpha(s[i])) return false;

    if (s[i] && s[i - 1] && isupper(s[i]) && isupper(s[i - 1])) return false;
    
    if (s[i] && s[i - 1] && islower(s[i]) && islower(s[i - 1])) return false;
  }
  
  return true;
}
