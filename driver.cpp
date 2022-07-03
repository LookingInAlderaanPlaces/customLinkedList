#include <iostream>
#include "LinkedList.h"

void InsertNode(LinkedList<int>& MyList, int& theInt);
void ListPrint(LinkedList<int>& MyList);
void deleteNode(LinkedList<int>& MyList, int& theInt);
void peekFirst(LinkedList<int>& MyList);
void peekLast(LinkedList<int>& MyList);
void directions();


int main() {
    LinkedList<int> MyList;
    bool done = false;
    int number, input;
    while(!done){
        directions();
        std::cin >> input;
        switch (input){
        case 1:
            std::cout << "Enter a number you would like to add:\n";
            std::cin >> number;
            InsertNode(MyList, number);
            break;
    
        case 2:
            if (!MyList.isEmpty()){
                std::cout << "Enter a number you would like to remove:\n";
                std::cin >> number;
                deleteNode(MyList, number);
            }
            else{
                std::cout << "The list is empty!\n";
            }
            break;
        
        case 3: 
            if (!MyList.isEmpty()){
                ListPrint(MyList);
            }
            else{
                std::cout << "The list is empty!\n";
            }
            break;

        case 4:
            peekFirst(MyList);
            break;

        case 5:
            peekLast(MyList);
            break;

        case 6:
            done = true;
            break;
        }
    }
}
    

void InsertNode(LinkedList<int>& MyList, int& theInt){
    MyList.addNode(theInt);
}

void ListPrint(LinkedList<int>& MyList){
    MyList.printList();
}

void deleteNode(LinkedList<int>& MyList, int& theInt){
    MyList.removeNode(theInt);
}
void peekFirst(LinkedList<int>& MyList){
    std::cout << "First item is: " << MyList.getFirstInput();
}

void peekLast(LinkedList<int>& MyList){
    std::cout << "Last item is: " << MyList.getLastInput() << std::endl;
}

void directions(){
    std::cout << "-----------------------------------\n"
                 "To add to the list press \"1\"\n"
                 "To remove from the list press \"2\"\n"
                 "To print the list press \"3\"\n"
                 "To see first item press \"4\"\n"
                 "To see last item press \"5\"\n"
                 "To quit the program press \"6\"\n"
                 "-----------------------------------\n";
}