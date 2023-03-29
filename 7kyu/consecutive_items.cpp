//You are given a list of unique integers arr, and two integers a and b. Your task is to find out whether or not a and b appear consecutively in arr, and return a boolean value (True if a and b are consecutive, False otherwise).

//It is guaranteed that a and b are both present in arr.

#include <cmath>

bool consecutive(std::vector<int>arr, int a,int b) {  
  int aPos = std::find(arr.begin(), arr.end(), a) - arr.begin();
	int bPos = std::find(arr.begin(), arr.end(), b) - arr.begin();
  
	return abs(aPos - bPos) == 1;
}
