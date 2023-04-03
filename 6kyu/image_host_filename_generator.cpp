//Create a function for generating a random 6 character string which will be used to access the photo URL.

//To make sure the name is not already in use, you are given access to an PhotoManager object.

//You can call it like so to make sure the name is unique

// at this point, the website has only one photo, hosted on the 'ABCDEF' url
//photoManager.nameExists("ABCDEF"); // returns true
//photoManager.nameExists("BBCDEF"); // returns false

//Note: We consider two names with same letters but different cases to be unique.

#include <string>
#include <vector>

std::string generateName()
{
  static const char alpha[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";
  
  std::string generatedName;

  for (int i = 0; i < 6; ++i) {
      generatedName += alpha[rand() % (sizeof(alpha) - 1)];
  }
  
  if (photoManager.nameExists(generatedName))
    return generateName();
  
  return generatedName;
}
