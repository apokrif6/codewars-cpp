//Make a function "add" that will be able to sum elements of list continuously and return a new list of sums.

For example:
//
//add [1,2,3,4,5] == [1, 3, 6, 10, 15], because it's calculated like 
//this : [1, 1 + 2, 1 + 2 + 3, 1 + 2 + 3 + 4, 1 + 2 + 3 + 4 + 5]

#include <vector>

std::vector<int> add(const std::vector<int>& arr)
{
  std::vector<int> result;
  int sum = 0;
  
  for (int element : arr)
  {
    sum += element;
    result.push_back(sum);
  }
  
  return result;
}
