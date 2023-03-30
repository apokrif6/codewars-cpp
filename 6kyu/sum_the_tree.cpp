//Given a node object representing a binary tree:

//struct node
//{
//  int value;
//  node* left;
//  node* right;
//}

//write a function that returns the sum of all values, including the root. Absence of a node will be indicated with a null value.

//Examples:

//10
//| \
//1  2
//=> 13

//1
//| \
//0  0
//    \
//     2
//=> 3

// Return the sum of all values in the tree, including the root
int sumTheTreeValues(node* root) {
  if (!root) return 0;
  
  int sum = root->value;
  
  sum += sumTheTreeValues(root->left) + sumTheTreeValues(root->right);
  
  return sum;
}
