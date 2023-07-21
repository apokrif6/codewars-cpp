//Alex is transitioning from website design to coding and wants to sharpen his skills with CodeWars.
//He can do ten kata in an hour, but when he makes a mistake, he must do pushups.
//These pushups really tire poor Alex out, so every time he does them they take twice as long.
//His first set of redemption pushups takes 5 minutes.
//Create a function, alexMistakes, that takes two arguments: the number of kata he needs to complete, and the time in minutes he has to complete them.
//Your function should return how many mistakes Alex can afford to make.

unsigned alexMistakes(unsigned numberOfKatas, unsigned timeLimit) {
  int result = 0;
  unsigned pushupsTime = 5;
  unsigned timeLeft = timeLimit - numberOfKatas * 6;
  
  while (timeLeft >= pushupsTime) {
    timeLeft -= pushupsTime;
    pushupsTime *= 2;
    ++result;
  }
  
  return result;
}
