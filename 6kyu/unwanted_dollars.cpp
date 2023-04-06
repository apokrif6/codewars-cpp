//If you're faced with an input box, like this:

                                           +--------------+
//Enter the price of the item, in dollars: |              |
                                           +--------------+
//do you put the $ sign in, or not? Inevitably, some people will type a $ sign and others will leave it out. The instructions could be made clearer - but that won't help those annoying people who never read instructions anyway.

//A better solution is to write code that can handle the input whether it includes a $ sign or not.

//So, we need a simple function that converts a string representing a number (possibly with a $ sign in front of it) into the number itself.

//Remember to consider negative numbers (the - sign may come either before or after the $ sign, if there is one), and any extraneous space characters (leading, trailing, or around the $ sign) that the users might put in. You do not need to handle input with trailing characters other than spaces (e.g. "1.2 3" or "1$"). If the given string does not represent a number, (either with or without a $ sign), return 0.0 .

using namespace std;

double money_value(const string &s)
{
  std::string result;
  
  for (unsigned int i = 0; i < s.size(); i++) {
    if (s[i] == '+' || s[i] == '-' || s[i] == '.' || isdigit(s[i])) {
      result.push_back(s[i]);
    }
  }
  
  return atof(result.c_str());
}
