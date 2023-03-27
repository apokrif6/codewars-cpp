//Being a bald man myself, I know the feeling of needing to keep it clean shaven. Nothing worse that a stray hair waving in the wind.

//You will be given a string(x). Clean shaved head is shown as "-" and stray hairs are shown as "/". Your task is to check the head for stray hairs and get rid of them.

//You should return the original string, but with any stray hairs removed. Keep count ot them though, as there is a second element you need to return:

//0 hairs --> "Clean!"
//1 hair --> "Unicorn!"
//2 hairs --> "Homer!"
//3-5 hairs --> "Careless!"
//>5 hairs --> "Hobo!"

//So for this head: "------/------" you shoud return:

//["-------------", "Unicorn"]

#include <string>
#include <utility>
#include <algorithm>

std::pair<std::string, std::string> bald(const std::string& s) {
  int hairs = 0;
  char ch = '/';

  for (auto c : s)
  {
    if (c == ch)
      ++hairs;
  }
  
  std::string newString = s;
  std::replace(newString.begin(), newString.end(), '/', '-');
  
  if (hairs == 0)
    return std::pair(newString, "Clean!");
  
  if (hairs == 1)
    return std::pair(newString, "Unicorn!");
  
  if (hairs == 2)
    return std::pair(newString, "Homer!");

  
  if (hairs >= 3 && hairs <= 5)
    return std::pair(newString, "Careless!");
  
  if (hairs > 5)
    return std::pair(newString, "Hobo!");
}
