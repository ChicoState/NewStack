#include <vector>

template <class T> class NewStack {

	private:
		std::vector<T> myStack;
	
	public:
		void push(T);
		T pop();
		T peak();
		int size();
		void removeAll();
};

