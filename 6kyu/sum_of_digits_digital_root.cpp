//Digital root is the recursive sum of all the digits in a number.

//Given n, take the sum of the digits of n. If that value has more than one digit, continue reducing in this way until a single-digit number is produced. The input will be a non-negative integer.
//Examples

//    16  -->  1 + 6 = 7
//   942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
//132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
//493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2

#include <iostream>
#include <cmath>

int digital_root(int n)
{
  if (n == 0) {
    return 0;
  }
  
  int countDigits = log10(n) + 1;
  
  if (countDigits == 1) {
    return n;
  }
  
  auto getSum = [](int n)
  {
      int sum = 0;
    
      while (n != 0) {
          sum = sum + n % 10;
          n = n / 10;
      }
    
      return sum;
  };
    
  return digital_root(getSum(n));
}
