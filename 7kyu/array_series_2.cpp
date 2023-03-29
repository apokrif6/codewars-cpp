//Task

//Given an array/list [] of integers , Find the product of the k maximal numbers.

#include <vector>

using namespace std; 

int maxProduct (vector<int>numbers , int sub_size)
{
  int result = 1;
  std::sort(numbers.begin(), numbers.end(), std::greater{});
  
  for (int i = 0; i < sub_size; ++i)
  {
    result *= numbers[i];
  }
  
  return result;
}
