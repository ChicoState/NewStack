/**
 * @file newstack.cpp
 *
 * @author Cole Warner
 */
#include "newstack.h"

NewStack::NewStack()
{
    
}

void NewStack::push(int x)
{
    myVector.push_back(x);

}


void NewStack::pop()
{
    return myVector.pop_back();    

}

int NewStack::peek()
{
    return myVector.back();
}


int NewStack::size()
{
    return myVector.size();
}


void NewStack::removeAll()
{
    myVector.clear();
}