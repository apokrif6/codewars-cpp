//Definition

//Jumping number is the number that All adjacent digits in it differ by 1.
//Task

//Given a number, Find if it is Jumping or not .

#include <string>

using namespace std; 

string jumpingNumber (int number)
{
  if (number < 10)
    return "Jumping!!";
  
  string s = to_string(number);
  for (size_t i = 1; i < s.size(); ++i)
  {
    if (abs(s[i] - s[i - 1]) != 1)
      return "Not!!";
  }
  
  return "Jumping!!";
}
