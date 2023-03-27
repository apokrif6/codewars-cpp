//Write a function that checks if a given string (case insensitive) is a palindrome.

#include <string>

bool isPalindrom (const std::string& str)
{
   std::string reversed = str;
  
   for (char& c : reversed) {
     c = toupper(c);
   }
  
  return reversed == std::string(reversed.rbegin(), reversed.rend());
}
