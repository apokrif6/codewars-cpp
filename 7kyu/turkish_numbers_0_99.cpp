//Your Task

//Complete the function to convert an integer into a string of the Turkish name.

//    input will always be an integer 0-99;
//    output should always be lower case.

//Background

//Forming the Turkish names for the numbers 0-99 is very straightforward:

//    units (0-9) and tens (10, 20, 30, etc.) each have their own unique name;
//    all other numbers are simply [tens] + [unit], like twenty one in English.

//Unlike English, Turkish does not have "teen"-suffixed numbers; e.g. 13 would be directly translated as "ten three" rather than "thirteen" in English.

#include <string>
#include <cmath>

std::string getTurkishNumber(unsigned int n) {
  std::map<int, std::string> numbers {
    {0, "sıfır"},
    {1, "bir"},
    {2, "iki"},
    {3, "üç"},
    {4, "dört"},
    {5, "beş"},
    {6, "altı"},
    {7, "yedi"},
    {8, "sekiz"},
    {9, "dokuz"},
    {10, "on"},
    {20, "yirmi"},
    {30, "otuz"},
    {40, "kırk"},
    {50, "elli"},
    {60, "altmış"},
    {70, "yetmiş"},
    {80, "seksen"},
    {90, "doksan"}
  };
  
  std::string result;
  
  if ((n % 10 == 0) || n <= 10)
  {
    result = numbers.at(n);
    return result;
  }
  
  result = numbers.at(n / 10 * 10) + " " + numbers.at(n % 10);
  
  return result;
}
