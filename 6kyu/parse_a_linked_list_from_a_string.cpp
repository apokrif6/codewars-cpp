//Parse a linked list from a string
//Related Kata

//Although this Kata is not part of an official Series, you may want to complete this Kata before attempting this one as these two Kata are deeply related.
//Preloaded

//Preloaded for you is a class, struct or derived data type Node ( depending on the language ) used to construct linked lists in this Kata:

//class Node {
//  public:
//    int data;
//    Node *next;
//    Node(int data, Node *next = nullptr): data(data), next(next) {}
//};

//Prerequisites

//This Kata assumes that you are already familiar with the idea of a linked list. If you do not know what that is, you may want to read up on this article on Wikipedia. Specifically, the linked lists this Kata is referring to are singly linked lists, where the value of a specific node is stored in its data / $data/Data property, the reference to the next node is stored in its next / $next / Next property and the terminator for a list is null / NULL / nil / nullptr / null() / [].

//Additionally, this Kata assumes that you have basic knowledge of Object-Oriented Programming ( or a similar concept ) in the programming language you are undertaking. If you have not come across Object-Oriented Programming in your selected language, you may want to try out an online course or read up on some code examples of OOP in your selected language up to ( but not necessarily including ) Classical Inheritance.

#include <iostream>
#include <string>
#include <list>

Node *parse(const std::string& s) {
  std::string copiedString = s;
  size_t pos = 0;
  std::string det = " -> ";

  std::string token;
  
  while ((pos = copiedString.find(det)) != std::string::npos)
  {
    token = copiedString.substr(0, pos);
        
    copiedString.erase(0, pos + det.length());  

    if (token != "nullptr")
    {
      Node* node = new Node(stoi(token), parse(copiedString));
      
      return node;
    }
  }
  
  return nullptr;
}
