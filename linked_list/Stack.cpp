#include <iostream>
#include "Stack.h"

using namespace std;

//returns true if the Queue is empty
bool Stack::isEmpty() {
    if((sList.getFront()->next())==NULL) {
        return true;
    } else {return false;}
}

