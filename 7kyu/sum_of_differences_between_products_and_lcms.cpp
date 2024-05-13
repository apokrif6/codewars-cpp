//In this kata you need to create a function that takes a 2D array/list of non-negative integer pairs and returns the sum of all the "saving" that you can have getting the LCM of each couple of number compared to their simple product.

//For example, if you are given:

//[[15,18], [4,5], [12,60]]

//Their product would be:

//[270, 20, 720]

//While their respective LCM would be:

//[90, 20, 60]

//Thus the result should be:

//(270-90)+(20-20)+(720-60)==840

#include <vector>
#include <utility>
#include <cstdint>
#include <numeric>

uint64_t sum_differences_between_products_and_LCMs(const std::vector<std::pair<uint64_t, uint64_t>>& pairs)
{
  uint64_t sum = 0;
  for(auto [a, b] : pairs) {
    sum += a * b - std::lcm(a,b);
  }
  return sum;
}
