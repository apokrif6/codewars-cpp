//Linked Lists - Length & Count

//Implement Length() to count the number of nodes in a linked list.

//Length(null) => 0
//Length(1 -> 2 -> 3 -> null) => 3

//Implement Count() to count the occurrences of an integer in a linked list.

//Count(null, 1) => 0
//ount(1 -> 2 -> 3 -> nullptr, 1) => 1
//Count(1 -> 1 -> 1 -> 2 -> 2 -> 2 -> 2 -> 3 -> 3 -> nullptr, 2) => 4

//I've decided to bundle these two functions within the same Kata since they are both very similar.

//The push()/Push() and buildOneTwoThree()/BuildOneTwoThree() functions do not need to be redefined.

/* Node Definition
struct Node {
  Node * next;
  int data;
}
*/

int Length(Node *head)
{
  int length = 0;

  while (head)
  {
    head = head->next;
    ++length;
  }
  
  return length;
}

int Count(Node *head, int data)
{
  int count = 0;
  
  while (head)
  {
    if (head->data == data)
      ++count;
    
    head = head->next;
  }
  
  return count;
}
