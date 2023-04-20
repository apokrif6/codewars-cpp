//Your task is to write function factorial.

long long factorial(int n) {
  long result = 1;
  
  for (int i = 1; i <= n; ++i) {
    result *= i;
  }
  
  return result;
}
