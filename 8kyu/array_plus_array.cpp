//I'm new to coding and now I want to get the sum of two arrays... Actually the sum of all their elements. I'll appreciate for your help.

//P.S. Each array includes only integer numbers. Output is a number too.

#include <vector>
#include <numeric>

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
  return std::accumulate(a.begin(), a.end(), 0) + std::accumulate(b.begin(), b.end(), 0);
}
