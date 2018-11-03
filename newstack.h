/**
 * @file newstack.h
 *
 * @author Cole Warner
 */

#include <vector>

#ifndef NEWSTACK_H
#define NEWSTACK_H

using std::vector;

//template <typename T>

class NewStack
{
public:
    NewStack();
    void push(int x);
    void pop();
    int peek();
    int size();
    void removeAll();

private:
    vector<int> myVector;

        
};

#endif







