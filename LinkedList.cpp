#include <iostream>

template<typename ItemType>
void LinkedList<ItemType>::addNode(ItemType newEntry) {
    
   if (ItemCount == 0){
       headPtr = new Node<ItemType>;
       headPtr->Node::setData(newEntry);
       headPtr->Node::setNext(nullptr);
       tailPtr = headPtr;
       ++ItemCount;
   }
   else {
       NodePtr prevPtr = tailPtr;
       tailPtr = new Node<ItemType>;
       prevPtr->setNext(tailPtr);
       tailPtr->setData(newEntry);
       tailPtr->setNext(nullptr);
       ++ItemCount;
   } 
}

template<typename ItemType>
void LinkedList<ItemType>::removeNode(ItemType anEntry) {
  
    if (headPtr->getData() == anEntry){
        NodePtr tempPtr = headPtr;
        headPtr = headPtr->getNext();
        delete tempPtr;
        --ItemCount;
    }
    else if (tailPtr->getData() == anEntry){
        NodePtr tempPtr = headPtr;
        while (tempPtr->getNext() != tailPtr){
            tempPtr = tempPtr->getNext();
        }
        tailPtr = tempPtr;
        tailPtr->setNext(nullptr);
        delete tempPtr;
        --ItemCount;
    }
    else{
        NodePtr tempPtr = headPtr;
        NodePtr tempTwoPtr = nullptr;
        while ((tempPtr != tailPtr) && (tempPtr->getData() != anEntry))
        {
            tempTwoPtr = tempPtr;
            tempPtr = tempPtr->getNext();
        }
        if(tempPtr->getData() == anEntry){
            tempTwoPtr->setNext(tempPtr->getNext());
            delete tempPtr;
            --ItemCount;
        }
        else{
            std::cout << "Your desired item does not exist!\n";
            delete tempPtr;
            delete tempTwoPtr;
        }
    }
}

template<typename ItemType>
void LinkedList<ItemType>::printList(){
    NodePtr tempPtr = headPtr;
    while (tempPtr != nullptr){
        std::cout << tempPtr->getData() << std::endl;
        tempPtr = tempPtr->getNext();
    }   
}

template <typename ItemType>
ItemType LinkedList<ItemType>::getFirstInput(){
    return headPtr->getData();
}

template<typename ItemType>
ItemType LinkedList<ItemType>::getLastInput(){
    return tailPtr->getData();
}

template<typename ItemType>
bool LinkedList<ItemType>::isEmpty(){
    if (ItemCount == 0)
    {
        return true;
    }
    else{
        return false;
    }
    
}
/*
template<typename ItemType>
void clearList(){
    while (headPtr != nullptr){
        //std::cout << headPtr->data << std::endl;
        delete headPtr;
    }
    delete headPtr;
}
*/