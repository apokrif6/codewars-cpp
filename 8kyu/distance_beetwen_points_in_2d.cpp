//This series of katas will introduce you to basics of doing geometry with computers.

//Point objects have x and y attributes (X and Y in C#) attributes.

//Write a function calculating distance between Point a and Point b.

//Tests round answers to 6 decimal places.

#include <cmath>

double distance_between_two_points(const Point& a, const Point& b) {
   return std::hypot(a.x - b.x, a.y - b.y);
}
