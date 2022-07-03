// This is a medium-difficulty Node class
#ifndef NODE_
#define NODE_
#include <iostream>
/* declare this class to be a template,
meaning it can any variable type. This is 
done using the typename keyword */
template <typename ItemType>
class Node {
private:
  /* declare a variable named data that is 
     of type ItemType which looking at the template
     is assigned the typename keyword. Essentially
     data can now be any C++ variable type */
  ItemType data;
  /* declare a variable next that points to the Node
     class. we designate it nullptr here jsut to make
     sure we dont miss it and have a dangling ptr. Notice
     the <ItemType> here. This is needed to show that the 
     Node we are pointing to is a template. */
  Node<ItemType>* next = nullptr;
public:
  /* Default ctor. ctors are used to initialize
     variables when an object is created. Ctors
     are executed automatically whenever an object
     is created */
  Node() = default;
  /* here we set create the data section of our
     node. we do this my passing in a variable
     theData of ItemType and setting it equal to 
     data. */
  void setData(ItemType& theData);
  /* here is where we set our pointer part of the
     node to the next node. we do this by passing in
     a pointer of the node class named nextptr. we 
     then set next equal to nextptr.*/
  void setNext(Node<ItemType>* nextPtr);
  ItemType getData();
  Node<ItemType>* getNext();
};

#include "Node.cpp"
#endif
