//Task

//Given an array/list [] of integers , Find The maximum difference between the successive elements in its sorted form. 

#include <vector>

using namespace std; 

int maxGap (vector <int> numbers)
{
  int max = 0;
  sort(numbers.begin(), numbers.end());

  for (int i = 1; i < numbers.size(); ++i)
  {
    int tmpMax = numbers[i] - numbers[i - 1];
    if (tmpMax > max)
      max = tmpMax;
  }
  
  return max;
}
