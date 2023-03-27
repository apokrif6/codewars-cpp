//Your task in this kata is to implement a function that calculates the sum of the integers inside a string. For example, in the string "The30quick20brown10f0x1203jumps914ov3r1349the102l4zy dog", the sum of the integers is 3635.

//Note: only positive integers will be tested.

#include <string>
 
int sumOfIntegers (const std::string& str) {
  int result = 0;
  int current = 0;
  
  for (char c : str)
  {
    if (isdigit(c))
    {
      current = current* 10 + c-'0';
    }
    else
    {
      result += current;
      current = 0;
    }
  }
  
  return result + current;
}
