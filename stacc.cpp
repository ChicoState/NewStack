#include <vector>
#include <iostream>

#ifndef STACK_H
#define STACK_H
template <typename T>
class Stack {
  private:
    std::vector<T> myStack;
  public:
    bool isEmpty() {return myStack.empty();};
    T peek() {return myStack[myStack.size()-1];};
    T pop();
    void push(T asdf) {myStack.push_back(asdf);};
};
#endif


template <typename T>
T Stack<T>::pop(){

    T temp =  myStack[myStack.size()-1];
    myStack.erase(myStack.end()-1);
    return temp;

}
