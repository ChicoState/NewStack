#include "NewStack.h"
#include <iostream>

template <class T> void NewStack<T>::push(T val) {
    myStack.push_back(val);
}

template <class T> T NewStack<T>::peak() {
    return myStack.back();
}

template <class T> T NewStack<T>::pop() {
    T temp = myStack.back();
    
    myStack.pop_back();
    return temp;
}

template <class T> int NewStack<T>::size() {
    return myStack.size();
}

template <class T> void NewStack<T>::removeAll() {
    myStack.clear();
}


int main(void) {

    NewStack<int> test1;
    NewStack<float> test2;
    NewStack<char> test3;

    /* a bunch of random tests in no specific order or style follow */
    
    test1.push(1);
    test1.push(-5); // top element of stack1

    std::cout << std::endl;

    std::cout << "size of stack1: " << test1.size() << " top of stack1: " << test1.peak() << std::endl;

    test1.pop();

    std::cout << "stack1 now has top element: " << test1.size() << std::endl;

    test1.removeAll();

    std::cout << "Stack should be empty " << test1.peak() << std::endl << std::endl;

    test2.push(3.14);
    test2.push(66.67);
    test2.push(102.5);
    test2.push(0.000001); // top element of stack2

    std::cout << "size of stack2 " << test2.size() << " & top element is: " << test2.peak() << std::endl;

    test2.removeAll();

    std::cout << "stack2 should be empty now: " << test2.size();
    std::cout << " & just for testing to see what happens: " << test2.peak() << std::endl << std::endl;

    test3.push('h');
    test3.push('z');
    test3.push('0');
    test3.push('x');
    test3.push('y'); // top element of stack3

    std::cout << "stack3's size: " << test3.size() << " stack3's top: " << test3.peak() << std::endl;

    test3.pop();
    test3.pop();

    std::cout << "poped 2 elements of stack3, size is now: " << test3.size() << " and top thing is: " << test3.peak();

    test3.removeAll();

    std::cout << std::endl << "it's now a sizeof( " << test3.size() << " ) and peak returns: " << test3.peak() << std::endl;

    return 0;
}
