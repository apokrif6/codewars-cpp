//Your goal is to implement the method meanVsMedian which accepts an odd-length array of integers and returns one of the following:

//'mean' - in case mean value is larger than median value
//'median' - in case median value is larger than mean value
//'same' - in case both mean and median share the same value
//Reminder: Median

//Array will always be valid (odd-length >= 3)

double findMean(std::vector<int> numbers)
{
    int sum = 0;
  
    for (auto number : numbers) {
      sum += number;
    }
 
    return (double) sum / (double) numbers.size();
}
 
double findMedian(std::vector<int> numbers)
{
    std::sort(numbers.begin(), numbers.end());

    return (double) numbers[numbers.size() / 2];
}

std::string meanVsMedian(std::vector<int> numbers)
{
  double mean = findMean(numbers);
  double median = findMedian(numbers);
  
  if (mean == median)
    return "same";
  
  if (median > mean)
    return "median";
  
  return "mean";
}
