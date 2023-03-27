//Complete the method/function so that it converts dash/underscore delimited words into camel casing. The first word within the output should be capitalized only if the original word was capitalized (known as Upper Camel Case, also often referred to as Pascal case). The next words should be always capitalized.
//Examples

//"the-stealth-warrior" gets converted to "theStealthWarrior"

//"The_Stealth_Warrior" gets converted to "TheStealthWarrior"

//"The_Stealth-Warrior" gets converted to "TheStealthWarrior"

#include <string>

std::string to_camel_case(std::string text)
{
  for(int i = 0; i < text.size(); ++i)
  {
    if(text[i] == '-' || text[i] == '_')
    {
      text.erase(i, 1);
      text[i] = toupper(text[i]);
    }
  }
  
  return text;
}
