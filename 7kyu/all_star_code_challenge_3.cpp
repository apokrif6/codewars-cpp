//This Kata is intended as a small challenge for my students

//Create a function, called removeVowels (or remove_vowels), that takes a string argument and returns that same string with all vowels removed (vowels are "a", "e", "i", "o", "u").

//remove_vowels("drake") // => "drk"
//remove_vowels("aeiou") // => ""

#include <string>
#include <regex>

std::string remove_vowels(const std::string& str) {
  std::regex r("[aeiou]");
  
  return regex_replace(str, r, "");
}
