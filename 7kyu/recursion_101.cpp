//In this Kata, you will be given two positive integers a and b and your task will be to apply the following operations:

//i) If a = 0 or b = 0, return [a,b]. Otherwise, go to step (ii);
//ii) If a ≥ 2*b, set a = a - 2*b, and repeat step (i). Otherwise, go to step (iii);
//iii) If b ≥ 2*a, set b = b - 2*a, and repeat step (i). Otherwise, return [a,b].

a and b will both be lower than 10E8.

std::pair<int, int> solve (int a, int b){
  if (a == 0 || b == 0)
    return std::pair<int, int> {a, b};
  
  if (a >= 2 * b) {
    return solve(a - 2 * b, b);
  } else if (b >= 2 * a) {
    return solve(a,  b - 2 * a);
  }
  
  return std::pair<int, int> {a, b};
}
