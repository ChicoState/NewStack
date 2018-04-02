// deque Stack class and StackWrapper class - Olekiy Al-saado
#ifndef S_H
#define S_H

#include<deque>

using namespace std;


/*
* Delegates Queue from STL to Stack functionality, wrapping
* the class as an Adapter.
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


#endif
