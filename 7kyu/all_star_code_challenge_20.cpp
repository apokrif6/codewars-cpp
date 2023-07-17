//This Kata is intended as a small challenge for my students

//All Star Code Challenge #20

//Create a function called addArrays() that combines two arrays of equal length, summing each element of the first with the corresponding element in the second, returning the "combined" summed array.
//Raise an error if input arguments are not of equal length.

//addArrays([1,2],[4,5]); // => [5,7]
//addArrays([1,2,3],[4,5]); // => Error

//Note:
//Expect array input to either contain numbers or strings only
//The function should also allow for concatenating string

//addArrays(["a"],["b"]) // => ["ab"]

#include <vector>
using namespace std;

template<class T>
vector<T> add_arrays(const vector<T>& array1, const vector<T>& array2) {
  if (array1.size() != array2.size()) throw std::exception();
  
  vector<T> result;
  
  for (size_t i = 0; i < array1.size(); ++i) {
    result.push_back(array1[i] + array2[i]);
  }
  
  return result;
}
