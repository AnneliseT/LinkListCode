#include <iostream>
#include <string>
#include "DLList.h"

using namespace std;

int main() {
    DLList myList;

    Node *myNode = new Node(5.3);
    Node *nextNode = new Node(4.6);
    Node *thirdNode = new Node(1.2);
    Node *fourthNode = new Node(3.5);



//    myList.appendFront(myNode);
//    myList.appendFront(nextNode);
//    myList.appendBack(thirdNode);
//    List should now read 4.6, 5.3, 1.2


    myList.insertInOrder(myNode);
    myList.insertInOrder(nextNode);
    myList.insertInOrder(thirdNode);
    myList.insertInOrder(fourthNode);

//Testing to see of these delete nodes correctly
    myList.print();
    myList.deleteBack();
    cout<<endl;
    myList.print();
    cout<<endl;
    myList.deleteFront();
    cout<<endl;
    myList.print();

    return 0;
}



