//Primes that have only odd digits are pure odd digits primes, obvious but necessary definition. Examples of pure odd digit primes are: 11, 13, 17, 19, 31... If a prime has only one even digit does not belong to pure odd digits prime, no matter the amount of odd digits that may have.

//Create a function, only_oddDigPrimes(), that receive any positive integer n, and output a list like the one below:

//[number pure odd digit primes below n, largest pure odd digit prime smaller than n, smallest pure odd digit prime higher than n]

//Let's see some cases:

//only_oddDigPrimes(20) ----> [7, 19, 31]
/////7, beacause we have seven pure odd digit primes below 20 and are 3, 5, 7, 11, 13, 17, 19
//19, because is the nearest prime of this type to 20
//31, is the first pure odd digit that we encounter after 20///

//only_oddDigPrimes(40) ----> [9, 37, 53]

//In the case that n, the given value, is a pure odd prime, should be counted with the found primes and search for the immediately below and the immediately after.

//Happy coding!!

//omg why it's so long...

#include <array>

class Solution
{
public:
  Solution(int n) : m_number(n) {};
  std::array<int, 3> CreateResult();
  int m_number;
  int m_prime_no = 0;
  int m_nearest_prime = 0;
  bool isOddDigit(int n);
  bool isPrime(int n);
  void searchOddPrimes();
  int searchLargerOddPrime();
};

bool Solution::isOddDigit(int n)
{
  while(n > 0)
  {
    int temp = n % 10;
    if (temp % 2 == 0)
      return false;

    n /= 10;
  }

  return true;
}

bool Solution::isPrime(int n)
{
  if (n == 2 || n == 3)
    return true;
  
  if (n <= 1 || n % 2 == 0 || n % 3 == 0)
    return false;
  
  for(int i = 5; i*i < n; i += 6) 
    if (n % i == 0 || n % (i+2) == 0)
      return false;
  
  return true;
}

void Solution::searchOddPrimes()
{
  for (int i = 1; i <= m_number; i += 2)
  {
    if (isOddDigit(i) && isPrime(i))
    {
      m_prime_no++;
      m_nearest_prime = i;
    }
  }
  return;
}

int Solution::searchLargerOddPrime()
{
  int i = 1;
  while(1)
  {
    if (isOddDigit(m_number+i) && isPrime(m_number+i))
      return m_number+i;
    ++i;
  }
}

std::array<int, 3> Solution::CreateResult()
{
  std::array<int, 3> result;
  result.fill(0);
  if (m_number > 0)
  {
    searchOddPrimes();
    result[0] = m_prime_no;
    result[1] = m_nearest_prime;
    result[2] = searchLargerOddPrime();
  }
  return result;
}

std::array<int, 3> onlyOddDigitPrimes(const int n) {
  
  Solution primeObj(n);
  return primeObj.CreateResult();
}
