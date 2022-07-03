#ifndef LINKEDLIST_
#define LINKEDLIST_
#include "Node.h"
#include <iostream>

template<typename ItemType>
class LinkedList{
 private:
    /* note the <using> here. this is identical
    to typedef. Both essentially create a new 
    type for your created variable to be of. 
    Similarly to how int NodePtr would make
    NodePtr an int, the using allows NodePtr
    to be a Node<ItemType>*. In this case, 
    Node<ItemType> is the class created in
    Node.h. and the * makes NodePtr a pointer 
    to that class. */
    using NodePtr = Node<ItemType>*;

    /* Because NodePtr is now a type in the same 
    way as int or string or char, we can create 
    a variable headPtr to be of type NodePtr.
    We then default it to nullptr which means
    it points to nothing as curetnly no other 
    nodes exist and we want to avoid dangling
    pointers. */
    NodePtr headPtr = nullptr;
    NodePtr tailPtr = nullptr;

    int ItemCount = 0;
 public:
    /* default ctor. See Node.h to remember what 
        ctors do. */
    LinkedList() = default;
    //LinkedList(LinkedList<ItemType> node);
    void addNode(ItemType newEntry);
    void removeNode(ItemType anEntry);
    void printList();
    ItemType getFirstInput();
    ItemType getLastInput();
    bool isEmpty();
    //void clearList();
};
#include "LinkedList.cpp"
#endif