//Convert number to reversed array of digits

//Given a random non-negative number, you have to return the digits of this number within an array in reverse order.
//Example(Input => Output):

//35231 => [1,3,2,5,3]
//0 => [0]

std::vector<int> digitize(unsigned long n) 
{     
    std::vector<int> result;
  
    do {
        result.push_back (n % 10);
        n /= 10;
    } while (n > 0);
   
    return result;
}
