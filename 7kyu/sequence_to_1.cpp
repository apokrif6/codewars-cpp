//Get the number n to return the sequence from n to 1. The number n can be negative and also large number. (See the range as the following)

//Example : 
//n=5  >> [5,4,3,2,1]
//n=-1 >> [-1,0,1]

std::vector<int> seqToOne(int n) {
  std::vector<int> result;

  if (n > 0)
  {
    for (int i = n; i >= 1; --i) {
      result.push_back(n--);
    }
  } else {
    for (int i = n; i <= 1; ++i) {
      result.push_back(n++);
    }
  }
  
  return result;
}
