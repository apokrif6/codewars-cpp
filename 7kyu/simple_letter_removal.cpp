//In this Kata, you will be given a lower case string and your task will be to remove k characters from that string using the following rule:

//- first remove all letter 'a', followed by letter 'b', then 'c', etc...
//- remove the leftmost character first.

//For example: 
//solve('abracadabra', 1) = 'bracadabra' # remove the leftmost 'a'.
//solve('abracadabra', 2) = 'brcadabra'  # remove 2 'a' from the left.
//solve('abracadabra', 6) = 'rcdbr'      # remove 5 'a', remove 1 'b' 
//solve('abracadabra', 8) = 'rdr'
//solve('abracadabra',50) = ''

//More examples in the test cases. Good luck!

std::string solve(const std::string &s, unsigned k)
{
  std::string b_string = s;
  std::vector<char> alphabet = {'a','b','c','d','e','f','g','h','i','j','k','l','m', 'n','o','p','q','r','s','t','u','v','w','x','y','z'};
  
  int index = 0;
  while (k > 0 && b_string.size() > 0)
  {
    std::size_t found = b_string.find(alphabet[index]);
    if (found!=std::string::npos)
    {
      b_string.erase(found, 1);
      --k;
    }
    else
    {
      ++index;
    }    
  }
  
  return b_string;
}
