//Return the number (count) of vowels in the given string.

//We will consider a, e, i, o, u as vowels for this Kata (but not y).

//The input string will only consist of lower case letters and/or spaces.

//V1
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int getCount(const string& inputStr){
  int num_vowels = 0;
  
  std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  
  for (int i = 0; i < inputStr.length(); i++) {
    if (std::find(vowels.begin(), vowels.end(), inputStr[i]) != vowels.end() ) {
      num_vowels++;
    }
  }
  
  return num_vowels;
}

//V2
#include <string>

int getCount(const std::string& str)
{
   return std::count_if(str.begin(), str.end(), [](int i){return i == 'a' || i == 'e' || i == 'i' || i == 'o'|| i == 'u';});
}
