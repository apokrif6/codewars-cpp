//Task

//Given an array of positive integers (the weights of the people), return a new array/tuple of two integers, where the first one is the total weight of team 1, and the second one is the total weight of team 2.

#include <vector>
#include <utility>

using namespace std; 

pair<int,int> rowWeights (const vector <int> &weights)
{
  pair<int, int> result;
  
  int i = 1;
  for (auto weight : weights)
  {
    if (i % 2 == 1) {
        result.first += weight;
    } else {
        result.second += weight;
    }
    ++i;
  }
  
  return result;
}
