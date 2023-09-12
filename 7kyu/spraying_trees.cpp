//There are five workers : James,John,Robert,Michael and William.They work one by one and on weekends they rest. Order is same as in the description(James works on mondays,John works on tuesdays and so on).You have to create a function 'task' that will take 3 arguments(w, n, c):

//Weekday
//Number of trees that must be sprayed on that day
//Cost of 1 litre liquid that is needed to spray tree,let's say one tree needs 1 litre liquid.

//Let cost of all liquid be x
//Your function should return string like this : 'It is (weekday) today, (name), you have to work, you must spray (number) trees and you need (x) dollars to buy liquid'

#include <string>
#include <map>

std::string task(std::string day_of_week, int n, int c) {
  std::map<std::string, std::string> workers {
    {"Monday", "James"},
    {"Wednesday", "Robert"},
    {"Friday", "William"},
    {"Tuesday", "John"},
    {"Thursday", "Michael"},
  };
  
  return "It is " + day_of_week + " today, " + workers[day_of_week] + ", you have to work, you must spray "
    + std::to_string(n) + " trees and you need " + std::to_string(n * c) + " dollars to buy liquid";
}
