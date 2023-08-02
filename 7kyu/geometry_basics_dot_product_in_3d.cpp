//This series of katas will introduce you to basics of doing geometry with computers.

//Vector objects have x, y, and z attributes.

//Write a function calculating dot product of Vector a and Vector b.

//You can read more about dot product on Wikipedia.

//Tests round answers to 6 decimal places.

double dot_product(const Vector& a, const Vector& b){  
  double x = a.x * b.x;
  double y = a.y * b.y;
  double z = a.z * b.z;

  return x + y + z;
}
