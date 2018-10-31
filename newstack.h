/**
 * @file newstack.h
 *
 * @author Cole Warner
 */

#include "vector.h"

#ifndef NEWSTACK_H
#define NEWSTACK_H

using namespace std;

class NewStack
{
    public:
        NewStack();
        void push(T);
        T pop();
        T peek();
        int size();
        void removeAll();

    private:
        Node* current;              // pointer to the current Node
        
};

#endif







