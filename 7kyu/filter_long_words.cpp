//Write a function that takes a string and an an integer n as parameters and returns a list of all words that are longer than n.

//Example:

//* With input "The quick brown fox jumps over the lazy dog", 4
//* Return ['quick', 'brown', 'jumps']

//Fundamentals

#include <vector>
#include <string>

std::vector<std::string> filter_long_words(const std::string& sentence, int n) {
  std::vector<std::string> result;
  
  std::istringstream sentenceStream(sentence);
  std::string word;
  while (std::getline(sentenceStream, word, ' '))
  {
    if (word.length() > n)
      result.push_back(word);
  }
  
  return result;
}
