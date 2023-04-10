//In this Kata, you will be given a multi-dimensional array containing 2 or more sub-arrays of integers. Your task is to find the maximum product that can be formed by taking any one element from each sub-array.

//Examples:
//solve( [[1, 2],[3, 4]] ) = 8. The max product is given by 2 * 4
//solve( [[10,-15],[-1,-3]] ) = 45, given by (-15) * (-3)
//solve( [[1,-1],[2,3],[10,-100]] ) = 300, given by (-1) * 3 * (-100)

int solve(std::vector<std::vector<int>> v) {
  int min = 1, max = 1;
  
  for (auto vec : v) {
    int currentMin = *std::min_element(vec.begin(), vec.end());
    int currentMax = *std::max_element(vec.begin(), vec.end());
    std::vector<int> result = {min * currentMin, min * currentMax, max * currentMin, max * currentMax};
    
    min = *std::min_element(result.begin(), result.end());
    max = *std::max_element(result.begin(), result.end());
  }
  
  return max;
}
