//Write a function that takes in a string of one or more words, and returns the same string, but with all five or more letter words reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

//Examples:

//spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw" 
//spinWords( "This is a test") => returns "This is a test" 
//spinWords( "This is another test" )=> returns "This is rehtona test"

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

std::vector<std::string> split(const std::string& str, char delim);
std::string spinWords(const std::string &str);

std::string spinWords(const std::string &str)
{
    std::string result = "";

    for (std::string& word : split(str, ' ')) {
        if (word.length() >= 5) {
            word = std::string(word.rbegin(), word.rend());
        }

        result += word + " ";
    }

    result.pop_back();

    return result;
}

std::vector<std::string> split(const std::string& str, char delim) 
{
    std::vector<std::string> strings;
    size_t start;
    size_t end = 0;

    while ((start = str.find_first_not_of(delim, end)) != std::string::npos) {
        end = str.find(delim, start);
        strings.push_back(str.substr(start, end - start));
    }

    return strings;
}
