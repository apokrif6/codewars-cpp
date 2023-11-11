//If the first day of the month is a Friday, it is likely that the month will have an Extended Weekend. That is, it could have five Fridays, five Saturdays and five Sundays.

//In this Kata, you will be given a start year and an end year. Your task will be to find months that have extended weekends and return:

//- The first and last month in the range that has an extended weekend
//- The number of months that have extended weekends in the range, inclusive of start year and end year.

//For example:
//solve(2016,2020) = ["Jan","May","5"]. //The months are: Jan 2016, Jul 2016, Dec 2017, Mar 2019 and May 2020

#include <ctime>

std::vector <std::string> solve(int a, int b){
	std::vector<int> extendedMonths = {0, 2, 4, 6, 7, 9, 11};
  std::vector<std::string> monthsNames = {"Jan", "Mar", "May", "Jul", "Aug", "Oct", "Dec", ""};

  int count = 0, first = 8, last = 8;
  std::tm start{};
  start.tm_mday = 1;
 
  for (int i = a; i <= b; ++i) {
    start.tm_year = i - 1900;
    for (int j = 0; j < 7; ++j) {
      start.tm_mon = extendedMonths[j];
      std::mktime(&start);
      if (start.tm_wday == 5) {
        count ++;
        last = j;
        if (first == 8) first = j;
      }
    }
  }
  
  return {monthsNames[first], monthsNames[last], std::to_string(count)};
}
