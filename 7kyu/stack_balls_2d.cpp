//Background

//I have stacked some pool balls in a triangle.

//Kata Task

//Given the number of layers of my stack, what is the total height?

//Return the height as multiple of the ball diameter.
//Example

//The image above shows a stack of 5 layers.
//Notes

//    layers >= 0
//   approximate answers (within 0.001) are good enough

#include <math.h>

double stack_height_2d(int layers)
{
    if (layers == 0) return 0.0;
  
    double diameter = (layers - 1) * sqrt(0.75) + 1;
  
    return diameter;
}
