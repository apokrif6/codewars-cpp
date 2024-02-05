//Task
//You are given a string representing a number in binary. Your task is to delete all the unset bits in this string and return the corresponding number (after keeping only the '1's).

//In practice, you should implement this function:

//long eliminate_unset_bits(string number);
//Examples
//eliminate_unset_bits("11010101010101") ->  255 (= 11111111)
//eliminate_unset_bits("111") ->  7
//eliminate_unset_bits("1000000") -> 1
//eliminate_unset_bits("000") -> 0

#include <string>
#include <algorithm>

long eliminate_unset_bits(const std::string& number){
  std::string cleared = number;
  cleared.erase(std::remove(cleared.begin(), cleared.end(), '0'), cleared.end());

  if (cleared == "")
    return 0;

  return std::stol(cleared, nullptr, 2);
}
