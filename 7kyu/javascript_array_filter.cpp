//The solution would work like the following:

//get_even_numbers({2,4,5,6}) => {2,4,6}

#include <vector>

std::vector<int> get_even_numbers(const std::vector<int>& arr) {
  std::vector<int> res;
  
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] % 2 == 0) {
      res.push_back(arr[i]);
    }
  }
  
  return res;
}
