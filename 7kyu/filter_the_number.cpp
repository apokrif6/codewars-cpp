//Filter the number

//Oh, no! The number has been mixed up with the text. Your goal is to retrieve the number from the text, can you return the number back to its original state?
//Task

//Your task is to return a number from a string.
//Details

//You will be given a string of numbers and letters mixed up, you have to return all the numbers in that string in the order they occur.
//Strings
//Fundamentals

#include <string>

long long filter_string(const std::string &value)
{
    long long result = 0;
  
    for(char c : value) {
        if(!std::isdigit(c)) continue;
      
        result = result * 10 + c - '0';
    }
  
    return result;
}

//OR

#include <string>
#include <regex>
long long filter_string(const std::string &value)
{
  std::regex r("[^0-9]+");
  
  std::string ans = std::regex_replace(value, r, "");
  
  return std::stoll(ans);
}
