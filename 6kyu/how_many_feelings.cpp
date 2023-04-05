//You have two arguments: string - a string of random letters(only lowercase) and array - an array of strings(feelings). Your task is to return how many specific feelings are in the array.

//For example:

//string -> 'yliausoenvjw'
//array -> ['anger', 'awe', 'joy', 'love', 'grief']
//output -> '3 feelings.' // 'awe', 'joy', 'love'


//string -> 'griefgriefgrief'
//array -> ['anger', 'awe', 'joy', 'love', 'grief']
//output -> '1 feeling.' // 'grief'


//string -> 'abcdkasdfvkadf'
//array -> ['desire', 'joy', 'shame', 'longing', 'fear']
//output -> '0 feelings.'
//If the feeling can be formed once - plus one to the answer.

//If the feeling can be formed several times from different letters - plus one to the answer.

//Eeach letter in string participates in the formation of all feelings. 'angerw' -> 2 feelings: 'anger' and 'awe'.

#include <string>

std::string countFeelings(std::string s, std::vector<std::string> arr) {
  int count = 0;
  bool found = false;
  std::string tmp;
  
  for (auto word : arr) {
    tmp = s;
    for (auto letter : word) {
      auto pos = tmp.find(letter);
      
      found = pos != std::string::npos;
      if (found) {
        tmp.erase(pos, 1);
      } else {
        break;
      }
    }
    
    if (found) count++;
  }
  
  return std::to_string(count) + " feeling" + (count == 1 ? "." : "s.");
}
