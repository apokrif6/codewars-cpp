//You will be given an array and a limit value. You must check that all values in the array are below or equal to the limit value. If they are, return true. Else, return false.

//You can assume all values in the array are numbers.

#include <vector>

bool small_enough(std::vector<int> arr, int limit) {
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > limit)
      return false;
  }
  
  return true;
}
