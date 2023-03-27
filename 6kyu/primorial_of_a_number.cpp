//Definition (Primorial Of a Number)

//Is similar to factorial of a number, In primorial, not all the natural numbers get multiplied, only prime numbers are multiplied to calculate the primorial of a number. It's denoted with P# and it is the product of the first n prime numbers.
//Task

//Given a number N , calculate its primorial. !alt !alt
//Notes

//    Only positive numbers will be passed (N > 0) .

//Input >> Output Examples:

//1- numPrimorial (3) ==> return (30)

//Explanation:

//Since the passed number is (3) ,Then the primorial should obtained by multiplying 2 * 3 * 5 = 30 .
//Mathematically written as , P3# = 30 .

bool isPrime(int n) {
  for (int i = 2; i * i <= n + 1; ++i) {
    if (n % i == 0)
      return false;
  }

  return n > 1;
}

unsigned long long numPrimorial (unsigned short int number )
{
  long result = 1;  
  long count = 0;
    
  for (int i = 2;;++i)
  {
    if (isPrime(i))
    {
      result *= i;
      count++;
    }
    
    if (count == number) break;
  }
  
  return result;
}
