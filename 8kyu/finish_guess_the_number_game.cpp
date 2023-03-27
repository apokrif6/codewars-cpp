//Imagine you are creating a game where the user has to guess the correct number. But there is a limit of how many guesses the user can do.

//    If the user tries to guess more than the limit, the function should throw an error.
//    If the user guess is right it should return true.
//    If the user guess is wrong it should return false and lose a life.

//Can you finish the game so all the rules are met?


#include <stdexcept>

class Guesser
{
public:
    Guesser(int number, int lives)
      : number(number), lives(lives)
    { }
    bool guess(int n)
    {
      if (lives <= 0)
        throw std::exception();
      
      if (number != n) {
        lives--;
        return false;
      }
      
      return true;
    }
  
private:
    int number, lives;
};
