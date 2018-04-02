// deque Stack class and StackWrapper class - Olekiy Al-saado
#ifndef S_H
#define S_H

#include<deque>

using namespace std;


/*
* Delegates Queue from STL to Stack functionality.
*/
template<typename T>
class Stack {
	private:
		deque<T> dequeStack;			
	public:
		void push(T);
		T pop();
		T peek();
		int size();
		void removeAll();	
};

template<typename T>
void Stack<T>::push(T val){
	dequeStack.push_front(val);
}

template<typename T>
T Stack<T>::pop(){
	if (dequeStack.size() == 0){
		T null;
		return null;
	}
	T ret = dequeStack.front();
	dequeStack.pop_front();
	return ret;
	
	
}

template<typename T>
void Stack<T>::removeAll(){
	while(!dequeStack.empty()){
		dequeStack.pop_front();
	}
}

template<typename T>
int Stack<T>::size(){
	return dequeStack.size();
}

template<typename T>
T Stack<T>::peek(){
	if (dequeStack.empty()){
		T null;
		return null;
	}
	return dequeStack.back();

}


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
