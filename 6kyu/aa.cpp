//This Kata is intended as a small challenge for my students

//All Star Code Challenge #18

//Create a function that accepts 2 string arguments and returns an integer of the count of occurrences the 2nd argument is found in the first one.

//If no occurrences can be found, a count of 0 should be returned.

//("Hello", "o")  ==>  1
//("Hello", "l")  ==>  2
//("", "z")       ==>  0

//Notes:

//    The first argument can be an empty string
//    The second string argument will always be of length 1


#include <string>

unsigned int strCount(std::string word, char letter){
  return std::count(word.cbegin(), word.cend(), letter);
}