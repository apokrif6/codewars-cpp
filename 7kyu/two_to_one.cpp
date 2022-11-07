//Take 2 strings s1 and s2 including only letters from a to z. Return a new sorted string, the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.

#include <set>
#include <string>

namespace TwoToOne {
  std::string longest(const std::string& s1, const std::string& s2) {
    std::set<char> wholeString(s1.begin(), s1.end());
    
    for (char c : s2)
      wholeString.insert(c);
    
    return std::string(wholeString.begin(), wholeString.end());
  }
}
