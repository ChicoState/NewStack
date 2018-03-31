#ifndef STACKWRAP_H
#define STACKWRAP_H

#include"Stack.h"


/*
* The follow wraps the 'Stack' class around another interface
* which simply calls existing stack class functions, without
* modifying source code.
*/

template<typename T>
class StackWrapper {
	private:
		Stack<T> stack;
		
		
	public:
		StackWrapper();
		~StackWrapper();
		void callPush(T val);
		T callPop();
		void callRemoveAll();
		T callPeek();
		int callSize();
		
};


template<typename T>
StackWrapper<T>::StackWrapper(){

}

template<typename T>
StackWrapper<T>::~StackWrapper(){
}

template<typename T>
void StackWrapper<T>::callPush(T val){
	stack.push(val);
}

template<typename T>
T StackWrapper<T>::callPop(){
	return stack.pop();
}

template<typename T>
void StackWrapper<T>::callRemoveAll(){
	stack.removeAll();
}

template<typename T>
T StackWrapper<T>::callPeek(){
	return stack.peek();
}

template<typename T>
int StackWrapper<T>::callSize(){
	return stack.size();
}


#endif