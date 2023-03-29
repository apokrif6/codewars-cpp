//Write a function that reverses the bits in an integer.

//For example, the number 417 is 110100001 in binary. Reversing the binary is 100001011 which is 267.

//You can assume that the number is not negative.

unsigned int reverse_bits(unsigned int n) {
  unsigned int result = 0;
  
  for (; n != 0; n >>= 1)
  {
    result += result + (n & 1);
  }
  
  return result;
}
