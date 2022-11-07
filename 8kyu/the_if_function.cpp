//Create a function called _if which takes 3 arguments: a boolean value bool and 2 functions (which do not take any parameters): func1 and func2

//When bool is truth-ish, func1 should be called, otherwise call the func2.
//Example:

//void TheTrue() { std::cout << "true" }
//void TheFalse() { std::cout << "false" }
//_if(true, TheTrue, TheFalse);
//// Logs 'true' to the console.

void _if(bool value, std::function<void(void)> func1, std::function<void(void)> func2)
{
  return value ? func1() : func2();
}
