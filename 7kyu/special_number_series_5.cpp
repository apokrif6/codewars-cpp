//Definition

//A number is a Special Number if it’s digits only consist 0, 1, 2, 3, 4 or 5

//Given a number determine if it special number or not .
//Warm-up (Highly recommended)
//Playing With Numbers Series
//Notes

//    The number passed will be positive (N > 0) .

//    All single-digit numbers within the interval [1:5] are considered as special number. 

#include <string>

using namespace std; 

string specialNumber (int number)
{
  vector specialDigits = {0, 1, 2, 3, 4, 5};
  
  while (number > 0)
  {
    int tmp = number % 10;
    if (!count(specialDigits.begin(), specialDigits.end(), tmp))
      return "NOT!!";
    
    number /= 10;
  }
  
  return "Special!!";
}
