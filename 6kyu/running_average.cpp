//Javascript // Lua // C++:
//Create a function runningAverage() that returns a callable function object. Update the series with each given value and calculate the current average.

//rAvg = runningAverage();
//rAvg(10) = 10.0;
//rAvg(11) = 10.5;
//rAvg(12) = 11;

#include <cmath>

auto runningAverage() {
  return [sumOfElements = 0.0, numberOfElements = 0] (auto number) mutable {
    return std::round((sumOfElements += number) / ++numberOfElements * 100) / 100;
  };
}
