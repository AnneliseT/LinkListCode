#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include "DLList.h"

using namespace std;

/*Queue class uses a doubly-linked list as its base data structure and calls the linked
list functions to display queue behavior.*/
class Queue {
private:
    DLList qList;
public:
    Queue(){}
    ~Queue(){qList.destroy();}
    bool isEmpty();
    int getSize(){return qList.getSize();}
    Node *getFront() {return qList.getFront();}
    Node *getBack() {return qList.getBack();}
    void pushBack(Node *newNode) {qList.appendFront(newNode);}
    void popFront(){qList.deleteBack();}
    void printList() {qList.print();}
};

#endif // QUEUE_H_INCLUDED
