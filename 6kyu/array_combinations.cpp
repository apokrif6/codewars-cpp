//In this Kata, you will be given an array of arrays and your task will be to return the number of unique arrays that can be formed by picking exactly one element from each subarray.

//For example: solve([[1,2],[4],[5,6]]) = 4, because it results in only 4 possibilites. They are [1,4,5],[1,4,6],[2,4,5],[2,4,6].

//Make sure that you don't count duplicates; for example solve([[1,2],[4,4],[5,6,6]]) = 4, since the extra outcomes are just duplicates.

//See test cases for more examples.

//Good luck!

#include <vector>
#include <algorithm>

int solve(const std::vector<std::vector<int>> &data)
{
  int result = 1;
  
  for (auto it : data) {
    sort(it.begin(), it.end());
    it.erase(unique(it.begin(), it.end()), it.end());
    result *= it.size();
  }
  
  return result;
}
