//You work in the best consumer electronics corporation, and your boss wants to find out which three products generate the most revenue. Given 3 lists of the same length like these:

//products: ["Computer", "Cell Phones", "Vacuum Cleaner"]
//amounts: [3, 24, 8]
//prices: [199, 299, 399]
//return the three product names with the highest revenue (amount * price).

//Note: if multiple products have the same revenue, order them according to their original positions in the input list.

#include <string>
#include <vector>

std::vector<std::string> top3(
        const std::vector<std::string>& products,
        const std::vector<int>& amounts,
        const std::vector<int>& prices)
{
  std::vector<std::pair<std::string, int>> result;
	
  for (int i = 0; i < (int) products.size(); ++i) {
		result.push_back({products[i], amounts[i] * prices[i]});
	}
  
	std::sort(result.begin(), result.end(), [&](auto i, auto j) {
    return i.second > j.second;
  });

  return {result[0].first, result[1].first, result[2].first};}
