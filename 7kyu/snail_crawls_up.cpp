//The snail crawls up the column. During the day it crawls up some distance. During the night she sleeps, so she slides down for some distance (less than crawls up during the day).

//Your function takes three arguments:

//    The height of the column (meters)
//    The distance that the snail crawls during the day (meters)
//    The distance that the snail slides down during the night (meters)

//Calculate number of day when the snail will reach the top of the column.

int snail(int column, int day, int night) {
  int days = 0;
  int distance = 0;
  
  while (true)
  {
    distance += day;
     ++days;

    if (distance >= column)
      return days;
    
    distance -= night;
  }
}
