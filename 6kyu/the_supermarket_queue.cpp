//There is a queue for the self-checkout tills at the supermarket. Your task is write a function to calculate the total time required for all the customers to check out!
//input

//    customers: an array of positive integers representing the queue. Each integer represents a customer, and its value is the amount of time they require to check out.
//    n: a positive integer, the number of checkout tills.

//output

//The function should return an integer, the total time required.
//Important

//Please look at the examples and clarifications below, to ensure you understand the task correctly :)
//Examples

//queueTime(std::vector<int>{5,3,4}, 1)
//// should return 12
//// because when n=1, the total time is just the sum of the times

//queueTime(std::vector<int>{10,2,3,3}, 2)
//// should return 10
//// because here n=2 and the 2nd, 3rd, and 4th people in the 
//// queue finish before the 1st person has finished.

//queueTime(std::vector<int>{2,3,10}, 2)
//// should return 12

//Clarifications

//    There is only ONE queue serving many tills, and
//    The order of the queue NEVER changes, and
//    The front person in the queue (i.e. the first element in the array/list) proceeds to a till as soon as it becomes free.

//N.B. You should assume that all the test input will be valid, as specified above.

//P.S. The situation in this kata can be likened to the more-computer-science-related idea of a thread pool, with relation to running multiple processes at the same time: https://en.wikipedia.org/wiki/Thread_pool

long queueTime(std::vector<int> customers, int n){
  std::vector<long> result (n);
  
  for(int i = 0; i < customers.size(); i++)
  {
    result[0] += customers[i];
    std::sort(result.begin(), result.end());
  }
  
  return result[n - 1];
}
