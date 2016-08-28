#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include "DLList.h"

using namespace std;

/*Stack class uses a doubly-linked list as its base data structure and calls the linked
list functions to display stack behavior*/
class Stack {
private:
     DLList sList;
public:
    Stack(){}
    ~Stack(){sList.destroy();}
    bool isEmpty();
    int getSize(){return sList.getSize();}
    Node *getTop() {return sList.getFront();}
    //Node *getBack() {return qList.getBack();}
    void push(Node *newNode) {sList.appendFront(newNode);}
    void pop(){sList.deleteFront();}
    void printList() {sList.print();}
};

#endif // STACK_H_INCLUDED
