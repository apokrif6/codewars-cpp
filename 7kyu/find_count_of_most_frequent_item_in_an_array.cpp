//Complete the function to find the count of the most frequent item of an array. You can assume that input is an array of integers. For an empty array return 0
//Example

//input array: [3, -1, -1, -1, 2, 3, -1, 3, -1, 2, 4, 9, 3]
//ouptut: 5 

//The most frequent number in the array is -1 and it occurs 5 times.

#include <vector>

int most_frequent_item_count(const std::vector<int>& collection) {
  if (collection.size() == 0) return 0;
  
  std::map<int, int> counts;
  
  for (auto item : collection)
  {
    const auto it = counts.find(item);
    if (it != counts.end())
      it->second++;
    else
      counts.insert(std::pair<int, int>(item, 0));
  }

  auto pr = std::max_element(counts.begin(), counts.end(), [](auto x, auto y) {
      return x.second < y.second;
  });
    
  return pr->second + 1;
}
