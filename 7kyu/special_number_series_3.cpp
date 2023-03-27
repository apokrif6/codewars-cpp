//Definition

//Disarium number is the number that The sum of its digits powered with their respective positions is equal to the number itself.
//Task

//Given a number, Find if it is Disarium or not . 

#include <string>

std::string disariumNumber (int number)
{
  std::string s = std::to_string(number);
  int sum = 0;
  
  for(int i = 0; i < s.size(); ++i) {
    int dis = s[i]-'0';
    int q = dis;
    
    for(int j = 0; j < i; ++j)
    {
      q *= dis;
    }
    
    sum += q;
  }
  return sum == number? "Disarium !!" : "Not !!";
}
