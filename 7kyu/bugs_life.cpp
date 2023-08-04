//A bug lives in a world which is a cuboid and has to walk from one corner of the cuboid to the opposite corner (see the picture below).

//Google 'Cuboid Space Diagonal'
//Task

//Define a function which takes 3 arguments: the length a , width b, and height c of the bug's "world", and finds the shortest distance needed to walk from start to finish. The dimensions will be positive numbers.

//Note: The bug cannot fly and has to maintain contact with a surface at all times but can walk up walls.
//Example

//a=1, b=2, c=3: distance=4.242640687119285

#include <cmath>

double shortestDistance (double x, double y, double z) {
  double diagonalOne = sqrt(pow((x + y), 2) + pow(z, 2));
  double diagonalTwo = sqrt(pow((z + y), 2) + pow(x, 2));
  double diagonalThree = sqrt(pow((x + z), 2) + pow(y, 2));
  
  return std::min({diagonalOne, diagonalTwo, diagonalThree});
}
