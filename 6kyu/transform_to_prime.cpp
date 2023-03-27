//Task :

//Given a List [] of n integers , find minimum number to be inserted in a list, so that sum of all elements of list should equal the closest prime number .
//Notes

//    List size is at least 2 .

//    List's numbers will only positives (n > 0) .

//    Repetition of numbers in the list could occur .

//    The newer list's sum should equal the closest prime number . 

#include <vector>
#include <numeric>

using namespace std; 

bool isPrime (int n)
{
    if (n == 2 || n == 3)
        return true;

    if (n <= 1 || n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}

int minimumNumber (vector <int> numbers )
{  
  numbers.push_back(0);
  
  while(true) {
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    
    if(isPrime(sum))
      return numbers.back();
    
    numbers.back()++;
  }
}
