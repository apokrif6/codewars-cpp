//Given an array of integers, return a new array with each value doubled.

std::vector<int> maps(const std::vector<int> & values) {
  std::vector<int> result;
  for(auto a:values)
  {
    result.push_back(a * 2);
  }

  return result;
}
