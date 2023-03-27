//An element in an array is dominant if it is greater than all elements to its right. You will be given an array and your task will be to return a list of all dominant elements. For example:

//solve([1,21,4,7,5]) = [21,7,5] because 21, 7 and 5 are greater than elments to their right. 
//solve([5,4,3,2,1]) = [5,4,3,2,1]

//Notice that the last element is always included. All numbers will be greater than 0.

//More examples in the test cases.

//Good luck!

#include <vector>

std::vector<int> solve(std::vector<int> array){
  std::vector<int> output;
  
  for (int i = 0; i < array.size(); ++i)
  {
    bool dominant = true;
    
    for (int j = i + 1; j < array.size(); ++j
    {
      if (array[i] <= array[j])
      {
        dominant = false;
      }
    }
         
    if (dominant)
    {
      output.push_back(array[i]);
    }
  }
  
  return output;
}
