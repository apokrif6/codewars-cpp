//Create a function that takes an integer as an argument and returns "Even" for even numbers or "Odd" for odd numbers.

#include <string>

std::string even_or_odd(int number) 
{
  bool isEven = number % 2 == 0;

  return isEven ? "Even" : "Odd";
}
