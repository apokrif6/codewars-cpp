//Remove the duplicates from a list of integers, keeping the last ( rightmost ) occurrence of each element.
//Example:

//For input: [3, 4, 4, 3, 6, 3]

//    remove the 3 at index 0
//    remove the 4 at index 1
//    remove the 3 at index 3

//Expected output: [4, 6, 3]

//More examples can be found in the test cases.

//Good luck!


#include <vector>
#include <unordered_set>

std::vector<int> solve(std::vector<int> vec) {    
    std::unordered_set<int> unorderedSet(vec.rbegin(), vec.rend());
  
    vec.assign(unorderedSet.begin(), unorderedSet.end());
  
    return vec;
}

//OR

#include <vector>

std::vector<int> solve(std::vector<int> vec) {
  std::vector<int> result;
  
  reverse(vec.begin(), vec.end());
  
  for (auto i : vec) {
    if (std::count(result.begin(), result.end(), i)) continue;
    
    result.push_back(i);
  }
  
  reverse(result.begin(), result.end());

  return result;
}
