//This series of katas will introduce you to basics of doing geometry with computers.

//Vector objects (struct in C) have x, y, and z attributes.

//Write a function calculating cross product of Vector a and Vector b.

//You can read more about cross product on Wikipedia.

//Tests round answers to 6 decimal places.

Vector cross_product(const Vector& a, const Vector& b){
  double x = a.y * b.z - a.z * b.y;
  double y = a.z * b.x - a.x * b.z;
  double z = a.x * b.y - a.y * b.x;
  
  return {x, y, z};
}
