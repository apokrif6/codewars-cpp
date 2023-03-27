//I always thought that my old friend John was rather richer than he looked, but I never knew exactly how much money he actually had. One day (as I was plying him with questions) he said:

//    "Imagine I have between m and n Zloty..." (or did he say Quetzal? I can't remember!)
//    "If I were to buy 9 cars costing c each, I'd only have 1 Zloty (or was it Meticals?) left."
//    "And if I were to buy 7 boats at b each, I'd only have 2 Ringglets (or was it Zloty?) left."

//Could you tell me in each possible case:

//    how much money f he could possibly have ?
//    the cost c of a car?
//    the cost b of a boat?

//So, I will have a better idea about his fortune. Note that if m-n is big enough, you might have a lot of possible answers.

//Each answer should be given as ["M: f", "B: b", "C: c"] and all the answers as [ ["M: f", "B: b", "C: c"], ... ]. "M" stands for money, "B" for boats, "C" for cars.

//Note: m, n, f, b, c are positive integers, where 0 <= m <= n or m >= n >= 0. m and n are inclusive.

class Carboat
{
  public:
  static std::string howmuch(int m, int n) {
     if(n < m)
        std::swap(m, n);
    
     std::stringstream result;
     result << '[';
     for(int money = m; money <= n; ++money)
       if(money % 9 == 1 && money % 7 == 2)
         result << "[M: " << money << " B: " << money / 7 << " C: " << money / 9 << "]";
    
     result << ']';
    
     return result.str();
  }
};
