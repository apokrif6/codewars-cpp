//Simple, given a string of words, return the length of the shortest word(s).

//String will never be empty and you do not need to account for different data types.

#include <string>
int find_short(std::string str)
{
    std::istringstream inp(str);
    std::string s;
  
    int min = -1;
  
    while (std::getline(inp, s, ' '))
        if (s.length() < min)
            min = s.length();
  
    return min;
}
