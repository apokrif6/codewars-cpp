//Summary:

//Rock, Paper, Scissors is too boring- let's spice it up a little!

//Given an array of possible choices, what player 1 chooses and what player 2 chooses, create a function which determines who wins.

//If player 1 wins, return 'Player 1 won!'

//If player 2 wins, return 'Player 2 won!'

//If the game is drawn, return 'Draw!'

//Player 1 and 2 will always choose an item from the array choices.

//The array will only have one of each choice.
//Now for the details:

//The array will look something like this 👇

//["rock","paper","scissors"]

//The rules of rock-paper-scissors are as follows: alt text

//It is a tie if player 1 and player 2 choose the same option.

//If player 1 chooses "paper" and player 2 chooses "rock", since paper beats rock, return 'Player 1 won!'

//If player 1 chooses "paper" and player 2 chooses "scissors", since scissors beats paper, return 'Player 2 won!'

//If player 1 and player 2 both choose "scissors", return 'Draw!'

//(Think about how the order of each item in the array dictates if it wins or loses to other items, depending on their order)


//Solution is written in pure C
#include <stddef.h>

enum infinite {DRAW, ONE, TWO};

int index_of(size_t w, char const *choices[w], char *p);

enum infinite winner(size_t w, char const *choices[w], char *p1, char *p2) {
  int firstPlayer = index_of(w, choices, p1);
  int secondPlayer = index_of(w, choices, p2);
  
  int a = (firstPlayer - secondPlayer + w) % w;
  int b = (secondPlayer - firstPlayer + w) % w;
  
  if (a  > b) return TWO;
  if (a  < b) return ONE;
  return DRAW;
}

int index_of(size_t w, char const *choices[w], char *p) {
  for (size_t i = 0 ; i < w; ++i)
    if (choices[i] == p)
      return i;
  
  return -1;
}
