//Common denominators

//You will have a list of rationals in the form

//{ {numer_1, denom_1} , ... {numer_n, denom_n} } 
//or
//[ [numer_1, denom_1] , ... [numer_n, denom_n] ] 
//or
//[ (numer_1, denom_1) , ... (numer_n, denom_n) ] 

//where all numbers are positive ints. You have to produce a result in the form:

//(N_1, D) ... (N_n, D) 
//or
//[ [N_1, D] ... [N_n, D] ] 
//or
//[ (N_1', D) , ... (N_n, D) ] 
//or
//{{N_1, D} ... {N_n, D}} 
//or
//"(N_1, D) ... (N_n, D)"

//depending on the language (See Example tests) in which D is as small as possible and

//N_1/D == numer_1/denom_1 ... N_n/D == numer_n,/denom_n.

//Example:

//convertFracs [(1, 2), (1, 3), (1, 4)] `shouldBe` [(6, 12), (4, 12), (3, 12)]

#include <algorithm>
#include <string>
#include <vector>

class Fracts
{
public:
    static std::string convertFrac(std::vector<std::vector<unsigned long long>> &lst) {
        unsigned long long lcm = 1;
      
        for (auto &rat : lst)
        {
            lcm = lcm * rat.back() / std::__gcd(lcm, rat.back());
        }
        
        std::string result;
        for (auto &rat : lst)
        {
            result += "(" + std::to_string(rat.front() * (lcm / rat.back())) + "," + std::to_string(lcm) + ")";
        }
      
        return result;
    }
};
