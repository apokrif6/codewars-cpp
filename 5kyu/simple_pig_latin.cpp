//Move the first letter of each word to the end of it, then add "ay" to the end of the word. Leave punctuation marks untouched.
//Examples

//pigIt('Pig latin is cool'); // igPay atinlay siay oolcay
//pigIt('Hello world !');     // elloHay orldway !

#include <regex>

std::string pig_it(std::string str)
{
  std::regex pattern("([a-zA-Z])(\\S*)");
  std::string moved = "$2$1ay";
  
  return std::regex_replace(std::move(str), pattern, moved);
}
