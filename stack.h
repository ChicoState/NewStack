#ifndef STACK_H
#define STACK_H
#include <vector>

template <class T>
class Stack
{
  public:
    void push(T item) {in.push_back(item);}
    T pop() {T item = in.back();if(!in.empty())in.pop_back();return item;}
    T peek() {return in.back();}
    int size() {return in.size();}
    void removeAll() {while(!in.empty()){in.pop_back();};}
  private:
    std::vector<T> in;
};
#endif
