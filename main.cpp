/** Adapter Stack - Oleksiy Al-saadi
* 
* main.cpp - Tests functionality of StackWrapper class
* 	by creating a StackWrapper object of type <char>
*	and calling several functions referencing
*	the Stack functions they wrap. 
*
*/

#include<iostream>

using namespace std;

#include"StackWrapper.h"
#include"Stack_Node.h"



int main(){

	StackWrapper<char> stack;

	stack.callPush('a');
	stack.callPush('b');
	stack.callPush('c');
	cout << "Peek: " << stack.callPeek() << " - Size: " << stack.callSize() << endl;
	cout << "Pop: " << stack.callPop() << endl;
	stack.callRemoveAll();
	cout << "Size: " << stack.callSize() << endl;

	return 1;
}

