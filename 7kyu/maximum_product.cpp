//Task

//Given an array of integers , Find the maximum product obtained from multiplying 2 adjacent numbers in the array.
//Notes

//   Array/list size is at least 2.

//   Array/list numbers could be a mixture of positives, negatives also zeroes .

#include <vector>

using namespace std; 

int adjacentElementsProduct(vector<int> inputArray) 
{
  int result = std::numeric_limits<int>::min();

  for(int i = 1; i < inputArray.size(); ++i)
  {
    int product = inputArray[i] * inputArray[i - 1];

    if (product > result) 
        result = product;
  }
  
  return result;
}
