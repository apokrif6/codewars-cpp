//Task

//Given an array of N integers, you have to find how many times you have to add up the smallest numbers in the array until their Sum becomes greater or equal to K.

//Notes:

//    List size is at least 3.

//    All numbers will be positive.

//    Numbers could occur more than once , (Duplications may exist).

//    Threshold K will always be reachable.
//    Input >> Output Examples

//minimumSteps({1, 10, 12, 9, 2, 3}, 6)  ==>  return (2)

#include <vector>
#include <algorithm>
using namespace std; 

int minimumSteps (vector <int> numbers ,  int input)
{
  sort(numbers.begin(),numbers.end());
  
  int s = numbers[0];
  int k = 0;
  
  while (s < input)
  {
    ++k;
    s += numbers[k];
  }
  
  return k;
}
