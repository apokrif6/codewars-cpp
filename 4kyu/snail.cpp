//Snail Sort

//Given an n x n array, return the array elements arranged from outermost elements to the middle element, traveling clockwise.

//array = [[1,2,3],
//         [4,5,6],
//         [7,8,9]]
//snail(array) #=> [1,2,3,6,9,8,7,4,5]

//For better understanding, please follow the numbers of the next array consecutively:

//array = [[1,2,3],
//         [8,9,4],
 //        [7,6,5]]
//snail(array) #=> [1,2,3,4,5,6,7,8,9]


//NOTE: The idea is not sort the elements from the lowest value to the highest; the idea is to traverse the 2-d array in a clockwise snailshell pattern.

//NOTE 2: The 0x0 (empty matrix) is represented as en empty array inside an array [[]].

#include <vector>

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map)
{
    size_t n = snail_map[0].size();
    std::vector<int> snail_vec(n*n);
  
    int i = 0, j = 0, k = 0, margin = 0;
    while(k < n * n)
    {
        for ( ; j < n - margin; j++, k++)
            snail_vec[k] = snail_map[i][j];
      
        for (i++, j-- ; i <= j; i++, k++)
            snail_vec[k] = snail_map[i][j];
     
        for (i--, j-- ; j >= margin; j--, k++)
            snail_vec[k] = snail_map[i][j];

        for (i--, j++ ; i > j; i--, k++)
            snail_vec[k] = snail_map[i][j];

        i++; j++; margin++;
    }

    return snail_vec;
}
