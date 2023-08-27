//Task:

//You have to write a function pattern which creates the following pattern (See Examples) upto desired number of rows.

//If the Argument is 0 or a Negative Integer then it should return "" i.e. empty string.
//Examples:

//pattern(9):

//123456789
//234567891
//345678912
//456789123
//567891234
//678912345
//789123456
//891234567
//912345678

std::string pattern(int n)
{
  std::string result;
  
  for (int i = 0; i < n; i++, result += "\n") {
    for (int j = 0; j < n; j++) {
      result += std::to_string((i + j) % n + 1);
    }
  }
        
  return result.substr(0, result.size() - 1);
}
