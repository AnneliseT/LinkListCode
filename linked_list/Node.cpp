#include <iostream>
#include "Node.h"
using namespace std;
Node::Node(){};
Node::~Node(){};

Node::Node(double data){
    this->data = data;
    p = NULL;
    n = NULL;
}
void Node::setData(int data){this->data = data;}
void Node::setNext(Node *next){n = next;}
void Node::setPrev(Node *prev){p = prev;}
double Node::getData(){return data;}
Node* Node::next(){return n;}
Node* Node::prev(){return p;}
