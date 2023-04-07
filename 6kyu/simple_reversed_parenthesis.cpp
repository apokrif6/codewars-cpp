//Given a string, return the minimal number of parenthesis reversals needed to make balanced parenthesis.

//For example:

//solve(")(") = 2 Because we need to reverse ")" to "(" and "(" to ")". These are 2 reversals. 
//solve("(((())") = 1 We need to reverse just one "(" parenthesis to make it balanced.
//solve("(((") = -1 Not possible to form balanced parenthesis. Return -1.
//Parenthesis will be either "(" or ")".

int solve(std::string s) {
  int length = s.length();
  
  if (length % 2) 
    return -1;
  
  std::stack<char> unbalancedStack;
  
  for (int i = 0; i < length; i++) {
    if (s[i] == ')' && !unbalancedStack.empty()) {
      if (unbalancedStack.top() == '(') {
        unbalancedStack.pop();
      } else {
        unbalancedStack.push(s[i]);
      }
    } else {
      unbalancedStack.push(s[i]);
    }
  }
  
  int reducedLength = unbalancedStack.size();
  int n = 0;
  
   while (!unbalancedStack.empty() && unbalancedStack.top() == '(') {
      unbalancedStack.pop();
      n++;
  }
  
  return (reducedLength / 2 + n % 2);
}
