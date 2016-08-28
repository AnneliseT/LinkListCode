#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

//This function tests the Stack functionality.
void Stack_test() {

    //Creating the stack and creating three nodes
    Stack myS;
    Node *firstNode = new Node(1.2);
    Node *secondNode = new Node(4.6);
    Node *thirdNode = new Node(3.7);
    cout<<"3.7, 4.6, 1.2"<<endl;

    //Pushing all three nodes
    myS.push(firstNode);
    myS.push(secondNode);
    myS.push(thirdNode);

    //Printing full list
    myS.printList();
    cout<<endl;

    //Testing the pop and push functions
    myS.pop();
    myS.printList();
    cout<<endl;

    myS.pop();
    myS.printList();
    cout<<endl;

    myS.pop();
    myS.printList();
    cout<<endl;

    myS.push(new Node(7.1));
    myS.pop();
    myS.printList();
    cout<<endl;

}

//This function tests the Queue functionality
void Queue_test() {
    //Creating the queue and three nodes
    Queue myQ;
    Node *firstNode = new Node(1.2);
    Node *secondNode = new Node(4.6);
    Node *thirdNode = new Node(3.7);
    cout<<"List should read: 3.7, 4.6, 1.2"<<endl;

    //Pushing the three nodes onto the queue
    myQ.pushBack(firstNode);
    myQ.pushBack(secondNode);
    myQ.pushBack(thirdNode);

    //Printing the initial list
    myQ.printList();
    cout<<endl;

    myQ.popFront();
    myQ.printList();
    cout<<endl;

    myQ.pushBack(new Node(7.1));
    myQ.popFront();
    myQ.printList();

    cout<<endl;
    myQ.popFront();
    myQ.popFront();
    myQ.printList();
}

int main()
{
    //Can only run one test function at a time or the program crashes.Probably a destructor problem.
    Queue_test();
    //Stack_test();
}
