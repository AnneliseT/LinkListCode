#include <iostream>
#include "Queue.h"

using namespace std;

//returns true if the Queue is empty
bool Queue::isEmpty() {
    if((qList.getFront()->next())==NULL) {
        return true;
    } else {return false;}
}


