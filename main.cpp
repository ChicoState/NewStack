/**
 * @file main.cpp
 *
 * @author Cole Warner
 */

#include <iostream>
#include "newstack.h"

using std::cout;
using std::endl;


int main()
{
    NewStack myStack;

    myStack.push(5);
    myStack.push(6);
    myStack.push(7);
    myStack.push(8);
    myStack.push(15);

    int x = myStack.peek();

    cout << "x is " << x << endl;

    myStack.pop();

    int y = myStack.peek();

    cout << "y is " << y << endl;

    int z = myStack.size();

    cout << "z is " << z << endl;

    myStack.removeAll();

    cout << "empty: " << myStack.size() << endl;

    return 0;
}