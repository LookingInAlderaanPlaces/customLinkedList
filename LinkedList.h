#ifndef LINKEDLIST_
#define LINKEDLIST_
#include "Node.h"
#include <iostream>

template<typename ItemType>
class LinkedList{
 private:
    using NodePtr = Node<ItemType>*;
    NodePtr headPtr = nullptr;
    NodePtr tailPtr = nullptr;

    int ItemCount = 0;
 public:
    LinkedList() = default;
    void addNode(ItemType newEntry);
    void removeNode(ItemType anEntry);
    void printList();
    ItemType getFirstInput();
    ItemType getLastInput();
    bool isEmpty();
};
#include "LinkedList.cpp"
#endif