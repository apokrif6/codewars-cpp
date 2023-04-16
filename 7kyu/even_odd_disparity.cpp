//Given an array, return the difference between the count of even numbers and the count of odd numbers. 0 will be considered an even number.

//For example:
//solve([0,1,2,3]) = 0 because there are two even numbers and two odd numbers. Even - Odd = 2 - 2 = 0.  

//Let's now add two letters to the last example:

//solve([0,1,2,3,'a','b']) = 0. Again, Even - Odd = 2 - 2 = 0. Ignore letters. 

//The input will be an array of lowercase letters and numbers only.

//In some languages (Haskell, C++, and others), input will be an array of strings:

//solve ["0","1","2","3","a","b"] = 0 

//Good luck!

#include <string>

int solve(std::vector<std::string>v){  
  int evens = 0;
  int odds = 0;
  
  for (std::string number : v) {
    if (!isdigit(number[0])) continue;
    
    stoi(number) % 2 == 0 ? ++evens : ++odds; 
  }
  
  return evens - odds;
}
