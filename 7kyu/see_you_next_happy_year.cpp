//Scenario

//You're saying good-bye your best friend , See you next happy year .

//Happy Year is the year with only distinct digits , (e.g) 2018
//Task

//Given a year, Find The next happy year or The closest year You'll see your best friend !alt !alt
//Notes

//    Year Of Course always Positive .
//    Have no fear , It is guaranteed that the answer exists .
//    It's not necessary that the year passed to the function is Happy one .
//    Input Year with in range (1000  ≤  y  ≤  9000)

//Input >> Output Examples:

//nextHappyYear (7712) ==> return (7801)

//Explanation:

//As the Next closest year with only distinct digits is 7801 . 

#include <set>

unsigned short int nextHappyYear (unsigned short int year)
{
  for (; year++ ;)
  {
    std::set<int> s;
    s.insert(year / 1000);
    s.insert(year / 100 % 10);
    s.insert(year / 10 % 10);
    s.insert(year % 10);
    
    if (s.size() == 4)
      return year;
  }
}
