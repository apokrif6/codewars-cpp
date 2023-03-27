//There are no explanations. You have to create the code that gives the following results in Python, Ruby, and Haskell:

//one_two_three(0) == [0, 0]
//one_two_three(1) == [1, 1]
//one_two_three(2) == [2, 11]
//one_two_three(3) == [3, 111]
//one_two_three(19) == [991, 1111111111111111111]

//And it should give the following results in Javascript, Scala, D, Go, and Rust:

//oneTwoThree(0) == ['0', '0']
//oneTwoThree(1) == ['1', '1']
//oneTwoThree(3) == ['3', '111']
//oneTwoThree(19) == ['991', '1111111111111111111']

//In C, the results are to be assigned to seperate pointers.

include <array>
#include <string>
using namespace std;
std::array<std::string, 2> oneTwoThree(const unsigned int n) 
{
    int a = n;
    int b = n;
  
    string s, ss;
  
    while (b > 9)
    {
      b -= 9;
      s += '9';
    }
  
    s += to_string(b);
  
    for (int i = 0; i < s.length(); ++i)
    {
        a = s[i] - '0';
        for (int j = 0; j < a; ++j)
        {
          ss += '1';
        }
    }
  
    if (s == "0")
    {
      ss = "0";
    }
  
    return {s, ss};
}
