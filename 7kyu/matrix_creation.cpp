//Create an identity matrix of the specified size( >= 0).

//Some examples:

//(1)  =>  [[1]]

//(2) => [ [1,0],
//         [0,1] ]

//       [ [1,0,0,0,0],
//         [0,1,0,0,0],
//(5) =>   [0,0,1,0,0],
//         [0,0,0,1,0],
//         [0,0,0,0,1] ]   

std::vector<std::vector<int>> getMatrix(const int n) {
  std::vector<std::vector<int>> result(n, std::vector<int>(n, 0));
  
  for (int i = 0; i < n; ++i) {
    result[i][i] = 1;
  }
  
  return result;
}
