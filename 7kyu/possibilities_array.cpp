//A non-empty array a of length n is called an array of all possibilities if it contains all numbers between [0,a.length-1].Write a method named isAllPossibilities that accepts an integer array and returns true if the array is an array of all possibilities, else false.

//Example:

//a=[1,2,0,3]
//a.length-1=3 
//a includes [0,3] ,hence the function should return true

#include <vector>
#include <algorithm>

bool isAllPossibilities(std::vector<int> arr)
{
  if (arr.empty())
    return false;

  for (int i = 0; i < arr.size(); ++i)
  {
    if (std::find(arr.begin(), arr.end(), i) == arr.end())
      return false;
  }
  
  return true;
}
