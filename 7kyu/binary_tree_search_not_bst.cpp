//Given a number and a binary tree ( not a Binary Search Tree! ):

//    return True/true if the given number is in the tree
//    return False/false if it isn't

struct Node{
  int val;
  Node *left = nullptr;
  Node *right = nullptr;
};

bool search(int n, Node *root) {
  if (!root)
   return false;
  
  if (root->val == n)
    return true;
  
  return search(n, root->right) || search(n, root->left);
}
