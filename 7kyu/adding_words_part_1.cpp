//This is the first part of this kata series. Second part is here and third part is here

//Add two English words together!

//Implement a class Arith (struct struct Arith{value : &'static str,} in Rust) such that

//  //javascript
//  var k = new Arith("three");
///  k.add("seven"); //this should return "ten" 
//Input - Will be between zero and ten and will always be in lower case

//Output - Word representation of the result of the addition. Should be in lower case

#include <iostream>
#include <string>
using namespace std;

class Arith {
private:
  const std::vector<std::string> numbers = {
      "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
      "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
      "nineteen","twenty"};
  
  std::string currentNumber;

public:
  Arith(std::string number) {
    currentNumber = number;
  }
  
  std::string add(std::string addNumber) {
    return numbers[(find(numbers.begin(), numbers.end(), currentNumber) - numbers.begin()) + 
               (find(numbers.begin(), numbers.end(), addNumber) - numbers.begin())];
  }
};
