#include "newstack.h"

int main(int argc, char **argv)
{
    NewStack myStack = new NewStack();

    myStack.push(5);
    myStack.push(6);
    myStack.push(7);
    myStack.push(8);
    myStack.push(15);

    int x = myStack.peek();

    cout << "x is " << x << endl;
    
    int y = myStack.pop();

    cout << "y is " << y << endl;


    int z = myStack.peek();

    cout << "z is " << z << endl;

    int a = myStack.size();

    cout << "a is " << a << endl;    


    myStack.removeAll();

    myStack.size();
}