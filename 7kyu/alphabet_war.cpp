//Introduction

//There is a war and nobody knows - the alphabet war!
//There are two groups of hostile letters. The tension between left side letters and right side letters was too high and the war began.
//Task

//Write a function that accepts fight string consists of only small letters and return who wins the fight. When the left side wins return Left side wins!, when the right side wins return Right side wins!, in other case return Let's fight again!.

//The left side letters and their power:

// w - 4
// p - 3
// b - 2
// s - 1

//The right side letters and their power:

// m - 4
// q - 3
// d - 2
// z - 1

//The other letters don't have power and are only victims.

#include <string>
#include <map>

using namespace std;

string alphabetWar(string fight)
{
  map<char, int> leftSide = {
    {'w', 4},
    {'p', 3},
    {'b', 2},
    {'s', 1},
  };
  
  map<char, int> rightSide = {
    {'m', 4},
    {'q', 3},
    {'d', 2},
    {'z', 1},
  };
  
  int leftPoints = 0, rightPoints = 0;
  
  for (auto c : fight)
  {
    if (leftSide.count(c))
      leftPoints += leftSide[c];
    
    if (rightSide.count(c))
      rightPoints += rightSide[c];
  }
    
  if (leftPoints > rightPoints)
    return "Left side wins!";
  
  if (rightPoints > leftPoints)
    return "Right side wins!";
  
  return "Let's fight again!";
}
