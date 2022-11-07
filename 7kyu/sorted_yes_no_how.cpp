//Complete the method which accepts an array of integers, and returns one of the following:

//    "yes, ascending" - if the numbers in the array are sorted in an ascending order
//    "yes, descending" - if the numbers in the array are sorted in a descending order
//    "no" - otherwise

//You can assume the array will always be valid, and there will always be one correct answer.

#include <algorithm>
#include <string>
#include <vector>

std::string is_sorted_and_how(const std::vector<int>& a)
{
    if (std::is_sorted(std::begin(a), std::end(a)))
        return "yes, ascending";
        
    if (std::is_sorted(std::rbegin(a), std::rend(a)))
        return "yes, descending";
      
    return "no";
}
