//The vowel substrings in the word codewarriors are o,e,a,io. The longest of these has a length of 2. Given a lowercase string that has alphabetic characters only (both vowels and consonants) and no spaces, return the length of the longest vowel substring. Vowels are any of aeiou.

//Good luck!

#include <unordered_set>

using namespace std;

int solve(string s){
	unordered_set<char> vowels {'a', 'e' ,'i', 'o' , 'u'};
  
  int longest = 0;
  int longSub = 0;
  
	for (auto c : s)
  {
    longSub = (vowels.count(c)) ? (longSub + 1) : 0;
    
    if (longSub > longest)
        longest = longSub;  
  }
  
  return longest;
}
