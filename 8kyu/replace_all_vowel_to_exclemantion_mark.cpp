//Description:

//Replace all vowel to exclamation mark in the sentence. aeiouAEIOU is vowel.
//Examples

//replace("Hi!") === "H!!"
//replace("!Hi! Hi!") === "!H!! H!!"
//replace("aeiou") === "!!!!!"
//replace("ABCDE") === "!BCD!"

//V1
using namespace std;

string replace(const string &s)
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  
    string res;
  
    for (char c : s) {
      if (count(vowels.begin(), vowels.end(), tolower(c))) {
        res += '!';
      } else {
        res += c;
      }
    }
  
    return res; //coding and coding....
}

//V2

#include <string>
#include <regex>

using namespace std;

string replace(const string &w)
{
  return regex_replace(w, regex("[aeiouAEIOU]"), "!");
}
