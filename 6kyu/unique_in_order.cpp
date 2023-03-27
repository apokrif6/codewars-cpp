//Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any elements with the same value next to each other and preserving the original order of elements.

//For example:

//uniqueInOrder("AAAABBBCCDAABBB") == {'A', 'B', 'C', 'D', 'A', 'B'}
//uniqueInOrder("ABBCcAD")         == {'A', 'B', 'C', 'c', 'A', 'D'}
//uniqueInOrder([1,2,2,3,3])       == {1,2,3}

#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
  std::vector<T> result;
  
  for (const auto& c : iterable)
  {
    if (result.empty() || c != result.back())
      result.push_back(c);
  }
  
  return result;
}

std::vector<char> uniqueInOrder(const std::string& iterable) {
  std::vector<char> result;
  
  for (auto c : iterable)
  {
    if (result.empty() || c != result.back())
      result.push_back(c);
  }
  
  return result;
}
