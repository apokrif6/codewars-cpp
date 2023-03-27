//Your job at E-Corp is both boring and difficult. It isn't made any easier by the fact that everyone constantly wants to have a meeting with you, and that the meeting rooms are always taken!

//In this kata, you will be given an array. Each value represents a meeting room. Your job? Find the first empty one and return its index (N.B. There may be more than one empty room in some test cases).

//'X' --> busy
//'O' --> empty

//If all rooms are busy, return -1

#include <vector>

int meeting(const std::vector<char>& rooms) {
  for(int i = 0; i <= rooms.size(); ++i)
  {
    if (rooms[i] == 'O')
      return i;
  }
  
  return -1;
}
