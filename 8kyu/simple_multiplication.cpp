//This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

int simpleMultiplication(int a){
  return a * ((a % 2 == 0) ? 8 : 9);
}
