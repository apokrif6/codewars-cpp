//Task:

//You have to write a function pattern which creates the following pattern upto n number of rows. If the Argument is 0 or a Negative Integer then it should return "" i.e. empty string.
//Pattern:

//(n)
//(n)(n-1)
//(n)(n-1)(n-2)
//................
//.................
//(n)(n-1)(n-2)....4
//(n)(n-1)(n-2)....43
//(n)(n-1)(n-2)....432
//(n)(n-1)(n-2)....4321

//Examples:

//pattern(4):

//4
//43
//432
//4321

#include <string>

std::string pattern(int n){
  std::string result;
  
  for(int i = 0; i < n; ++i)
  {
    for(int j = n; j >= n - i; --j)
    {
        result += std::to_string(j);
    }
    result += "\n";
  }
  
  return result.substr(0, result.size() - 1);
}
