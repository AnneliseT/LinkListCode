#include <iostream>
#include "DLList.h"

using namespace std;

//---------------------------------------------------------------------------------------
/*NAMING: The naming of classes and functions is non-standard because these libraries
are already built into C++.*/

/*TODO: Write Functions below
-->DLList::void deleteValue(double x);
*/
//---------------------------------------------------------------------------------------


/*This is the destructor for DLLists. I am not sure this is working correctly.
Further testing is needed.*/
void DLList::destroy() {
    Node *tmp = Front->next();
    while(Front->next() != NULL) {
        Front->setNext(tmp->next());
        (tmp->next())->setPrev(NULL);
        delete tmp;
    }
}

/*Doubly-linked list constructor. All node pointers are set to NULL and the size
 of the list is set to zero.*/
DLList::DLList(){
    Front->setNext(NULL);
    Front->setPrev(NULL);
    Back->setNext(NULL);
    Back->setNext(NULL);
    listSize = 0;
}

/*This works. The print function iterates through the list and prints the data at each node.
This method only prints forward.*/
void DLList::print() {
    Node *tmp = Front->next();
    while(tmp != NULL) {
        double value = tmp->getData();
        cout<<value<<endl;
        tmp=tmp->next();
    }
    if (Front->next()==NULL) {cout<<"List is empty."<<endl;}
}

/*This works.This appends the node to the front of the list.*/
void DLList::appendFront(Node *newNode) {
    if ((Front->next())== NULL) {
        Front->setNext(newNode);
        Back->setPrev(newNode);
        listSize++;
    } else {
        newNode->setNext(Front->next());
        (Front->next())->setPrev(newNode);
        Front->setNext(newNode);
        newNode->setPrev(NULL);
        listSize++;
    }
}


/*This works. This function appends nodes to the back of the list.*/
void DLList::appendBack(Node *newNode) {
    if (Back->prev()== NULL) {
        Front->setNext(newNode);
        Back->setPrev(newNode);
        listSize++;
    } else {
        newNode->setPrev(Back->prev());
        (Back->prev())->setNext(newNode);
        Back->setPrev(newNode);
        listSize++;
    }
}

/*This is supposed to insert a node so that the list remains in numerical order.Will not
work if other functions, like appendFront, are called first.*/
void DLList::insertInOrder(Node *newNode) {
    Node *tmp = Front;
    int value = newNode->getData();

    do{
        if((tmp->next()) == NULL) {break;}
        else if((tmp->next())->getData()>= value) {break;}
        else {tmp=tmp->next();}
    }while(tmp!=NULL);

    if(tmp->next()==NULL) {
        Front->setNext(newNode);
        Back->setPrev(newNode);
        listSize++;
    } else {
        newNode->setNext(tmp->next());
        newNode->setPrev(tmp);
        tmp->next()->setPrev(newNode);
        tmp->setNext(newNode);
        listSize++;
    }
}

/*This works. Deletes the node at the front of the list.*/
void DLList::deleteFront() {
    if(Front->next()==NULL){cout<<"List is empty. Nothing to delete."<<endl;}
    else if(Back->prev()==Front->next()){
        Node *temp = Front->next();
        Front->setNext(NULL);
        Back->setPrev(NULL);
        cout<<"value deleted: "<<temp->getData()<<endl;
        delete temp;
    }
    else {
        Node *temp = Front->next();
        Front->setNext(temp->next());
        (temp->next())->setPrev(NULL);
        cout<<"value deleted: "<<temp->getData()<<endl;
        delete temp;
        listSize--;
    }
}

/*This works. Deletes the node at the back of the list.*/
void DLList::deleteBack() {
    if(Back->prev()==NULL){cout<<"List is empty. Nothing to delete."<<endl;}
    else if(Back->prev()==Front->next()){
        Node *temp = Back->prev();
        Front->setNext(NULL);
        Back->setPrev(NULL);
        cout<<"value deleted: "<<temp->getData()<<endl;
        delete temp;
    }
    else {
        Node *temp = Back->prev();
        Back->setPrev(temp->prev());
        (temp->prev())->setNext(NULL);
        cout<<"value deleted: "<<temp->getData()<<endl;
        delete temp;
        listSize--;
    }
}






