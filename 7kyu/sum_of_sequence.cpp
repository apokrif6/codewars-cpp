//Your task is to make function, which returns the sum of a sequence of integers.

//The sequence is defined by 3 non-negative values: begin, end, step (inclusive).

//If begin value is greater than the end, function should returns 0

int sequenceSum(int start, int end, int step)
{
  if (start > end) return 0;
  
  int sum = 0;
  
  for (int i = start; i <= end; i += step) {
    sum += i;
  }
  
  return sum;
}
