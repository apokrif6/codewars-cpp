//Given a sequence of integers, return the sum of all the integers that have an even index (odd index in COBOL), multiplied by the integer at the last index.

//Indices in sequence start from 0.

//If the sequence is empty, you should return 0.

#include <vector>

int even_last(std::vector<int> nums) {
  int size = nums.size();
  
  if (size == 0)
    return 0;
  
  int result = 0;
  int lastNumber = nums[size - 1];
    
  for (int i = 0; i < size; i += 2)
  {
      result += nums[i] * lastNumber;
  }
  
  return result;
}
