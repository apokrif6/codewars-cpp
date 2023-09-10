//This series of katas will introduce you to basics of doing geometry with computers.

//Point objects have x, y attributes. Triangle objects have attributes a, b, c describing their corners, each of them is a Point.

//Write a function calculating perimeter of a Triangle defined this way.

//Tests round answers to 6 decimal places.

#include <cmath>

double triangle_perimeter(const Triangle& t) {
  return hypot(t.a.x - t.b.x, t.a.y - t.b.y) +
         hypot(t.a.x - t.c.x, t.a.y - t.c.y) +
         hypot(t.b.x - t.c.x, t.b.y - t.c.y);
}
