//Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.

//invert([1,2,3,4,5]) == [-1,-2,-3,-4,-5]
//invert([1,-2,3,-4,5]) == [-1,2,-3,4,-5]
//invert([]) == []

#include <vector>

std::vector<int> invert(std::vector<int> values)
{
    std::vector<int> result;
  
    for (int i = 0; i < values.size(); i++) {
      result.push_back(-values[i]);
    }
  
    return result;
}

//OR

#include <vector>
#include <algorithm>

std::vector<int> invert(std::vector<int> values)
{
    transform(values.begin(), values.end(), values.begin(),
              std::negate<int>()
             );
  
    return values;
}
