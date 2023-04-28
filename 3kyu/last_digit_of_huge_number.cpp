//For a given list [x1, x2, x3, ..., xn] compute the last (decimal) digit of x1 ^ (x2 ^ (x3 ^ (... ^ xn))).

//E. g., with the input [3, 4, 2], your code should return 1 because 3 ^ (4 ^ 2) = 3 ^ 16 = 43046721.

//Beware: powers grow incredibly fast. For example, 9 ^ (9 ^ 9) has more than 369 millions of digits. lastDigit has to deal with such numbers efficiently.

//Corner cases: we assume that 0 ^ 0 = 1 and that lastDigit of an empty list equals to 1.

//This kata generalizes Last digit of a large number; you may find useful to solve it beforehand.


#include <list>
#include <iostream>
#include <math.h>

using namespace std;
int last_digit(list<int> array) {
	long int power = 0;
  long int currentNumber = 1;

	while (!array.empty()) {
		power = array.back();
		array.pop_back();
    
		if (currentNumber > 4) {
      currentNumber = (currentNumber % 4) + 4;
    }
    
    if (power > 10) {
      power = (power % 20) + 20;
    }
		
    currentNumber = pow(power, currentNumber);
	}
  
	return currentNumber % 10;
}
