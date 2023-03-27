//Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

#include <string>
#include <regex>

std::string removeExclamationMarks(std::string str){
  std::regex pattern("!");
  
  return regex_replace(str, pattern, "");
}
