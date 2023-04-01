//Task

//In this Kata you are fish in a pond that needs to survive by eating other fish. You can only eat fish that are the same size or smaller than yourself. 
//You must create a function called fish that takes a shoal of fish as an input string. From this you must work out how many fish you can eat and ultimately the size you will grow to.

//Rules

//1.  Your size starts at 1
//2.  The shoal string will contain fish integers between 0-9
//3.  0 = algae and wont help you feed.
//4.  The fish integer represents the size of the fish (1-9).
//5.  You can only eat fish the same size or less than yourself.
//6.  You can eat the fish in any order you choose to maximize your size.
//7.   You can and only eat each fish once.
//8.  The bigger fish you eat, the faster you grow. A size 2 fish equals two size 1 fish, size 3 fish equals three size 1 fish, and so on.
//9.  Your size increments by one each time you reach the amounts below.

//Increase your size

//Your size will increase depending how many fish you eat and on the size of the fish. This chart shows the amount of size 1 fish you have to eat in order to increase your size.
//Current size
	
//Amount extra needed for next size
	
//Total size 1 fish

//Please note: The chart represents fish of size 1

//Return an integer of the maximum size you could be.

int fish(std::string shoal) {
   int size = 1;
   int amount = 0;
  
   std::sort(shoal.begin(), shoal.end());
  
   for (auto c : shoal) {
     int fishSize = c - '0';
     
     if (size >= fishSize) {
        amount += fishSize;
     }
    
     if (amount >= size * 4) {
       ++size;
       amount = 0;
     }
    }
  
    return size;
}
