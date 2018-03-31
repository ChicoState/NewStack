#ifndef STACKNODE_H
#define STACKNODE_H


#include <iostream>

template <typename T>
class Stack {

	private:

		int current_size = 0;

		class Node {
			private:
				T value;
			public:
				Node(T val){
					value = val;
				}
				~Node() {
				}
				Node* prev = NULL;	
				Node* next = NULL;
				T get_val(){ return value; }
		};

		Node* head = NULL;
		Node* tail = NULL;

	public:
		Stack();
		~Stack();
		void push(T);
		T pop();
		void removeAll();
		T peek();
		int size();
		
};


template<typename T>
Stack<T>::Stack(){
}

template<typename T>
Stack<T>::~Stack(){
	removeAll();
}

template<typename T>
int Stack<T>::size(){
	return current_size;
}

template<typename T>
void Stack<T>::push(T val){


	try{
		if (head == NULL){
			head = new Node(val);
			tail = head;
			current_size++;
			return;
		}else{
			tail->next = new Node(val);
			tail->next->prev = tail;
			tail = tail->next;
			current_size++;
			return;			
		}
	}
	catch(...){
		throw;
	}

	return;
}

template<typename T>
T Stack<T>::peek(){
	return head->get_val();
}

template<typename T>
T Stack<T>::pop(){

	try {	
		auto temp = tail;
		tail = tail->prev;
		tail->next = NULL;
		current_size--;
		delete temp;
	}
	catch(...){
		throw;
	}
}

template<typename T>
void Stack<T>::removeAll(){
	while(current_size--){
		auto temp = tail;
		tail = tail->prev;
		delete temp;
	}
	current_size = 0;
	head = NULL;	
	tail = NULL;
}


#endif
