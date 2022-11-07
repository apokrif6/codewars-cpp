//Task

//Given Two integers a , b , find The sum of them , BUT You are not allowed to use the operators + and -
//Notes

//    The numbers (a,b) may be positive , negative values or zeros .

//    Returning value will be an integer .

//Input >> Output Examples

//1- Add (5,19) ==> return (24) 

//2- Add (-27,18) ==> return (-9)

//3- Add (-14,-16) ==> return (-30)

int Add (int x, int y)
{
    while (y != 0)
    {
        unsigned tmp = x & y;
      
        x = x ^ y;
      
        y = tmp << 1;
    }
  
    return x;
}
