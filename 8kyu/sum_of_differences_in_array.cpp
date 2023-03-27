//Your task is to sum the differences between consecutive pairs in the array in descending order.
//Example

//[2, 1, 10]  -->  9

//In descending order: [10, 2, 1]

//Sum: (10 - 2) + (2 - 1) = 8 + 1 = 9

//If the array is empty or the array has only one element the result should be 0 (Nothing in Haskell, None in Rust).

#include <numeric>
#include <algorithm>
#include <vector>

int sumOfDifferences(const std::vector<int>& arr){
  if (arr.size() < 2)
    return 0;  
  
  std::vector<int> sorted = arr; 
  std::vector<int> result;

  sort(sorted.begin(), sorted.end(), std::greater <>());
  
  for (int i = 0; i < sorted.size() - 1; ++i)
  {  
    result.push_back(sorted[i] - sorted[i + 1]);
  }
  
  return std::accumulate(result.begin(), result.end(), 0);
}
