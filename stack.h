#include <vector>
using std::vector;

template <class T>
class Stack
{
 private:
  vector<T> myStack;
 public:
  void push (T const &);
  T pop ();
  T peek ();
  int size ();
};

template<class T>
void Stack<T>::push(T const & input)
{
  myStack.push_back(input);
}

template<class T>
T Stack<T>::pop()
{
  T temp = myStack.back();
  myStack.pop_back();
  return temp;
}


template<class T>
T Stack<T>::peek()
{
  return myStack.back();
}

template<class T>
int Stack<T>::size()
{
  return myStack.size();
}
