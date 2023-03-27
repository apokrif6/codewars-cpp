//Definition

//Extra perfect number is the number that first and last bits are set bits.
//Task

//Given a positive integer N , Return the extra perfect numbers in range from 1 to N .

#include <vector>
using namespace std; 

vector<int> extraPerfect (int number)
{ 
  vector<int> result;
  
  for (int i = 1; i <= number; i += 2)
  {
    result.push_back(i);
  }
  
  return result;
}
