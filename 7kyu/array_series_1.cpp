//Task

//Given an array of integers , Find the minimum sum which is obtained from summing each Two integers product .

#include <vector>
#include <algorithm>

using namespace std;

int minSum (vector<int>passed)
{    
  sort(passed.begin(), passed.end());
  
  int sum = 0, size = passed.size();
  
  for (int i = 0; i < size / 2; ++i)
  {
    sum += passed[i] * passed[size - 1 - i];
  }
  
  return sum;
}
