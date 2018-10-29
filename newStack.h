#ifndef NEWSTACK_H
#define NEWSTACK_H
#include<iostream>
#include<vector>

using namespace std;
template <typename t>
class Newstack {
  public:
    Newstack();
    void push(t);
    t pop();
    t peek();
    int size();
    void removeAll();
  private:
    vector<t> mystack;
};

template <typename t>
Newstack<t>::Newstack()
{
}

template <typename t>
void Newstack<t>::push(t val)
{
  mystack.push_back(val);
}

template <typename t>
t Newstack<t>::pop()
{
  t tmp;
  tmp = mystack.back();
  mystack.pop_back();
  return tmp;
}

template <typename t>
t Newstack<t>::peek()
{
  return mystack.back();
}

template <typename t>
int Newstack<t>::size()
{
  return mystack.size();
}

template <typename t>
void Newstack<t>::removeAll()
{
  mystack.clear();
}

#endif
