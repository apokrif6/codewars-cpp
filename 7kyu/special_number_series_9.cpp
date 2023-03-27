//Definition

//A Tidy number is a number whose digits are in non-decreasing order.
//Task

//Given a number, Find if it is Tidy or not . 

#include <string>

using namespace std; 


bool tidyNumber (int number)
{
  int prev = 10;
 
  while (number)
  {
    int tmp = number % 10;
    number /= 10;
    if (tmp > prev)
       return false;
    
    prev = tmp;
  }
 
  return true;
}
