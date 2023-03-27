//Implement the method length, which accepts a linked list (head), and returns the length of the list.

//For example: Given the list: 1 -> 2 -> 3 -> 4, length should return 4.

//The linked list is defined as follows:

//template <class T>
//class Node
//{
//public:
//    T data;
//    Node *next;
//    Node(T x, Node *p = NULL) : data(x), next(p) {}
//    Node() : next(NULL) {}
//};

//Note: the list may be null and can hold any type of value.

//Good luck!

template <class T>
int length(const Node<T> *head)
{
  int tails = 0;

  while(head)
  {
    head = head->next;
    ++tails;
  }

  return tails;
}
