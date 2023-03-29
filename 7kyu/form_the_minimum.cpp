//Task

//Given a list of digits, return the smallest number that could be formed from these digits, using the digits only once (ignore duplicates).
//Notes:

//    Only positive integers will be passed to the function (> 0 ), no negatives or zeros.

#include <vector>
#include <set>

using namespace std; 

unsigned long long minValue (vector <int> values)
{
  set<int> setValues;
  
  for (auto value : values)
  {
    setValues.insert(value);
  }
  
  string result;

  for (auto const& value : setValues)
  {
      result += to_string(value);
  }
  
  return stol(result);
}
