//Write a function which calculates the average of the numbers in a given list.

//Note: Empty arrays should return 0.

#include <vector>
#include <numeric>
using namespace std; 

double calcAverage(const vector<int>& values){
  return accumulate(values.begin(),values.end(), 0.0) / values.size();
}
