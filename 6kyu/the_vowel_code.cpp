//Step 1: Create a function called encode() to replace all the lowercase vowels in a given string with numbers according to the following pattern:

//a -> 1
//e -> 2
//i -> 3
//o -> 4
//u -> 5

//For example, encode("hello") would return "h2ll4". There is no need to worry about uppercase vowels in this kata.

//Step 2: Now create a function called decode() to turn the numbers back into vowels according to the same pattern shown above.

//For example, decode("h3 th2r2") would return "hi there".

//For the sake of simplicity, you can assume that any numbers passed into the function will correspond to vowels.

include <string>
#include <unordered_map>

std::string encode(const std::string& str) 
{
    auto numbers = std::unordered_map<char, char>
    {
        {'a', '1'},
        {'e', '2'},
        {'i', '3'},
        {'o', '4'},
        {'u', '5'}  
    };
    auto encoded_str = std::string{str};
  
    for (auto& c : encoded_str)
    {
        if (numbers.find(c) != std::end(numbers))
        {
            c = numbers[c];
        }
    }
  
    return encoded_str;
}

std::string decode(const std::string& str) 
{
    auto letters = std::unordered_map<char, char>
    {
        {'1', 'a'},
        {'2', 'e'},
        {'3', 'i'},
        {'4', 'o'},
        {'5', 'u'}
    };
  
    auto decoded_str = std::string{str};
  
    for (auto& c : decoded_str)
    {
        if (letters.find(c) != std::end(letters))
        {
            c = letters[c];
        }
    }
    return decoded_str;
}
