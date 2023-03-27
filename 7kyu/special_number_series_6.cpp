//Definition

//A number is called Automorphic number if and only if its square ends in the same digits as the number itself.
//Task

//Given a number determine if it Automorphic or not.

#include <string>

using namespace std; 

string autoMorphic (int number)
{
  for (auto square = number * number; number > 0; square /= 10, number /= 10)
  {
    if (square % 10 != number % 10)
      return "Not!!";
  }
        
  return "Automorphic";
}
