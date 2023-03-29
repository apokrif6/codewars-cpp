//Definition

//An element is leader if it is greater than The Sum all the elements to its right side.
//Task

//Given an array/list [] of integers , Find all the LEADERS in the array.

#include <vector>
#include <numeric>

using namespace std; 

vector<int> arrayLeaders(const vector<int>& numbers)
{
  vector<int> result;
  
  for (int i = 0; i < numbers.size(); ++i)
  {
    int sum = accumulate(numbers.begin() + i + 1, numbers.end(), 0);
    if(numbers[i] > sum)
      result.push_back(numbers[i]);
  }
  
  return result;
}
