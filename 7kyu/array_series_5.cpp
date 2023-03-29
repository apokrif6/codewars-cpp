//Task

//Given an array/list [] of integers , Construct a product array Of same size Such That prod[i] is equal to The Product of all the elements of Arr[] except Arr[i]. 

#include <vector>

using namespace std; 

vector <int> productArray (vector <int> numbers)
{
    vector<int> result(numbers.size());
    int product = 1;
  
    for(auto number : numbers)
    {
      product *= number;
    }
  
    for(int i = 0; i < result.size(); ++i)
    {
      result[i] = product/numbers[i];
    }
  
    return result;
}
