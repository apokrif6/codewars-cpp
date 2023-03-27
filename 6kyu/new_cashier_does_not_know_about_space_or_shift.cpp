//Some new cashiers started to work at your restaurant.

//They are good at taking orders, but they don't know how to capitalize words, or use a space bar!

//All the orders they create look something like this:

//"milkshakepizzachickenfriescokeburgerpizzasandwichmilkshakepizza"

//The kitchen staff are threatening to quit, because of how difficult it is to read the orders.

//Their preference is to get the orders as a nice clean string with spaces and capitals like so:

//"Burger Fries Chicken Pizza Pizza Pizza Sandwich Milkshake Milkshake Coke"

//The kitchen staff expect the items to be in the same order as they appear in the menu.

//The menu items are fairly simple, there is no overlap in the names of the items:

//1. Burger
//2. Fries
//3. Chicken
//4. Pizza
//5. Sandwich
//6. Onionrings
//7. Milkshake
//8. Coke

#include <string>

std::string get_order(const std::string &order) {
  const std::list<std::string> items = {
    "burger",
    "fries",
    "chicken",
    "pizza",
    "sandwich",
    "onionrings",
    "milkshake",
    "coke",
  };
  
  std::string out;
  std::string::size_type strPosition;
  
  for (auto item: items) {
    strPosition = 0;
    while ((strPosition = order.find(item, strPosition)) != std::string::npos) {
       std::string itemUpper = item;
       itemUpper[0] = toupper(itemUpper[0]);
       out += itemUpper + " "; 
       strPosition += item.length();
    }    
  }
  
  return out.substr(0, out.length() - 1);
}
