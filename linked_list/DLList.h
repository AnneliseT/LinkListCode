#ifndef DLLIST_H_INCLUDED
#define DLLIST_H_INCLUDED
#include "Node.h"

using namespace std;

/*This is a doubly-linked list class. It has "watcher" Nodes that keep track of the front
and back of the list.*/
class DLList {
    Node *Front;
    Node *Back;
    Node *Head;
    int listSize;
public:
    //constructor
    DLList();

    //destructor
    ~DLList(){destroy();}
    void destroy();

    //getters
    int getSize(){return listSize;}
    Node *getFront(){return Front;}
    Node *getBack(){return Back;}

    //insert methods
    void appendFront(Node *newNode);
    void appendBack(Node *newNode);
    void insertInOrder(Node *newNode);

    //delete methods
    void deleteValue(double x);
    void deleteFront();
    void deleteBack();

    //print function
    void print();
};


#endif // DLLIST_H_INCLUDED
