//Given two arrays a and b write a function comp(a, b) (orcompSame(a, b)) that checks whether the two arrays have the "same" elements, with the same multiplicities (the multiplicity of a member is the number of times it appears). "Same" means, here, that the elements in b are the elements in a squared, regardless of the order.

#include <algorithm>

class Same {
public:
  static bool comp(std::vector<int> a, std::vector<int> b) {
    for (auto& v : a)
    {
      v *= v;
    }
    
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    return a == b;
  }
};
