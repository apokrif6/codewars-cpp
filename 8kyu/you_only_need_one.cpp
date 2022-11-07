//You will be given an array a and a value x. All you need to do is check whether the provided array contains the value.

//Array can contain numbers or strings. X can be either.

//Return true if the array contains the value, false if not.

//V1
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    if (std::count(seq.begin(), seq.end(), elem)) return true;
  
    return false;
}

//V2
#include <vector>
#include <string>

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    bool result = false;
    
    for(int i = 0; i < seq.size(); i ++){
      if(elem == seq[i]){
        result = true;
      }
    }
    return result;
}
