#include <list>
#include <cstdlib>

using std::list;

template <class T>
class Stack {

private:
  list<T> stackList;

public:
  void push(T);
  T pop();
  T peek();
  int size();
  void removeAll();

};


template <class T>
void Stack<T>::push(T value){
  stackList.push_front(value);
}

template <class T>
T Stack<T>::pop(){
  if (!stackList.empty()){
    T value = stackList.front();
    stackList.pop_front();
    return value;
  }else{
    T value{};
    return value;
  }

}

template <class T>
T Stack<T>::peek(){
  if (!stackList.empty()){
    return stackList.front();
  }else{
    T value{};
    return value;
  }
}

template <class T>
int Stack<T>::size(){
  return stackList.size();
}

template <class T>
void Stack<T>::removeAll(){
  stackList.clear();
}
