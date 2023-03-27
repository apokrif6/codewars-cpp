//You will be given a string (x) featuring a cat 'C' and a mouse 'm'. The rest of the string will be made up of '.'.

//You need to find out if the cat can catch the mouse from it's current position. The cat can jump over three characters. So:

//C.....m returns 'Escaped!' <-- more than three characters between

//C...m returns 'Caught!' <-- as there are three characters between the two, the cat can jump.

#include <string>

std::string cat_mouse(std::string x) {
  int num = 0;
  
  for (int i = 0; i < x.size(); ++i)
  {
    if (x[i] == '.')
    {
      ++num;
    }
  }
  
  return (num > 3) ? "Escaped!" : "Caught!";
}
