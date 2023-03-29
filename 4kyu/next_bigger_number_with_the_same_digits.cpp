//Create a function that takes a positive integer and returns the next bigger number that can be formed by rearranging its digits. For example:

//  12 ==> 21
// 513 ==> 531
//2017 ==> 2071

//If the digits can't be rearranged to form a bigger number, return -1 (or nil in Swift, None in Rust):

//  9 ==> -1
//111 ==> -1
//531 ==> -1

#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

long nextBigger(long n) {
    string result = to_string(n);
  
    if (next_permutation(result.begin(), result.end()))
        return stoul(result);
  
    return -1;
}
