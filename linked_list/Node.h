#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED


using namespace std;

class Node {
private:
    double data;
    Node *p;
    Node *n;
public:
    Node();
    ~Node();
    Node(double data);
    void setData(int data);
    void setNext(Node *next);
    void setPrev(Node *prev);
    double getData();
    Node *next();
    Node *prev();
};

#endif // NODE_H_INCLUDED
