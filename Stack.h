// Stack.h: Templatized interface and implementation of stack
// Copyright (C) 2015 Asesh Shrestha. All rights reserved

template<typename T>
class CStack
{
public:
	CStack(); // Default constructor
	~CStack(); // Destructor

	// Iterators
	//std::iterator *begin();
	//std::iterator *end();

	void displayContents() const; // Display the contents of this 

	void push(T t); // Push the specified content to the stack
	//void push(std::array<T> oArrayOfItems); // Push an array of items onto the stack
	void pop(); // Pop the last in item off the stack

	T operator[](int nIndex); // Indexing operator

	int size(); // Return the number of elements in the stack

	bool isEmpty() const; //

	void clear(); // Clear the contents of the stack

private:
	CStack<T> *m_pCurrentNode; // Pointer to current node
	CStack<T> *m_pNextNode; // Pointer to next node

	T m_oData; // Data 

	int m_nNumberOfItems; // Holds the number of items in the stack
};