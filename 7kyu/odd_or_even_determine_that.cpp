//Task
//Given a number N, determine if the sum of N consecutive numbers is odd or even.

//If the sum is definitely an odd number, return Odd.
//If the sum is definitely an even number, return Even.
//If the sum can be either odd or even ( depending on which first number you choose ), return Either.
//Examples
//Odd_or_Even(1) should return Either, because the sum can be odd or even.
//Odd_or_Even(6) should return Odd, because 6 consecutive numbers contain 3 odd and 3 even numbers, so their sum is always odd.
//Odd_or_Even(8) should return Even, because 8 consecutive numbers contain 4 odd and 4 even numbers, so their sum is always even.
//Note
//enum { Even, Odd, Either };
//is Preloaded.

int Odd_or_Even(unsigned int n) { 
  if (n % 2 != 0)
    return Either;
  
  if (n % 4 == 0)
    return Even;
  
  return Odd;
}
