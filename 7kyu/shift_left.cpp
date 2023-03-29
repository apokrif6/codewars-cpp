//You are given two strings. In a single move, you can choose any of them, and delete the first (i.e. leftmost) character.

//For Example:

//    By applying a move to the string "where", the result is the string "here".
//    By applying a move to the string "a", the result is an empty string "".

//Implement a function that calculates the minimum number of moves that should be performed to make the given strings equal.
//Notes

//    Both strings consist of lowercase latin letters.
//    If the string is already empty, you cannot perform any more delete operations.

#include <string>
long long shiftLeft(std::string s, std::string t) {
  int count = 0;
  
  while(s != t)
  {
    if(s.length() > t.length())
      s.erase(s.begin());
    else
      t.erase(t.begin());
    
    ++count;
  }
  
  return count;
}
