#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
  Stack<float> a;
  
  // Test push and peek
  a.push(1.1);
  cout << a.peek() << endl;
  cout << a.peek() << endl;
  a.push(1.2);
  cout << a.peek() << endl;

  // Test size
  cout << "size: " << a.size() << endl;

  // Test pop (empty pop returns 0 because that's what vector returns)
  cout << a.pop() << endl;
  cout << a.pop() << endl;
  cout << a.pop() << endl;

  // Repopulate to test removeAll
  a.push(1.1);
  cout << a.peek() << endl;
  cout << a.peek() << endl;
  a.push(1.2);
  cout << a.peek() << endl;

  // Test removeAll
  a.removeAll();
  cout << "size: " << a.size() << endl;
  cout << a.peek() << endl;
  cout << a.pop() << endl;

  return 0;
}
