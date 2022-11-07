#include <string>
using namespace std;

int get_factorial(int n)
{
  int f = 1;
  
  for (int i = 1; i <= n; ++i)
  {
    f *= i;
  }
  
  return f;
}

string strong_num(int number)
{
  int n = 0;
  
  for (int i = number; i > 0; i /= 10)
  {
    n += get_factorial(i % 10);
  }
  
  return number == n 
    ? "STRONG!!!!"
    : "Not Strong !!";
}
