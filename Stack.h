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

//-------------------------------------------------------------------
// Name: CStack
// Desc: Default constructor
//-------------------------------------------------------------------
template<typename T>
CStack<T>::CStack()
{
	m_pCurrentNode = m_pNextNode = nullptr;
}

//-------------------------------------------------------------------
// Name: ~CStack
// Desc: Destructor
//-------------------------------------------------------------------
template<typename T>
CStack<T>::~CStack()
{

}

//template<typename T>
//std::iterator *CStack<T>::begin()
//{
//
//}
//
//template<typename T>
//std::iterator *CStack<T>::end()
//{
//
//}

template<typename T>
void CStack<T>::displayContents() const
{
	CStack<T> *pStackNode = nullptr;

	if (isEmpty()) // This stack is isEmpty
	{
		return;
	}
	else // This stack is not isEmpty
	{
		pStackNode = m_pCurrentNode;

		do
		{
			// Check if the current node is isEmpty
			if (pStackNode == nullptr)
				return;

			std::wcout << pStackNode->m_oData << std::endl;

			pStackNode = pStackNode->m_pNextNode;
		} while (pStackNode != nullptr);

		// Iterate through all the nodes of this stack
		//for (pStackNode = m_pCurrentNode; pStackNode != nullptr; pStackNode = m_pNextNode)
		//{
		//	std::wcout << pStackNode->m_oData;
		//}
	}
}

//-------------------------------------------------------------------
// Name: push
// Desc: Push an item onto the stack
//-------------------------------------------------------------------
template<typename T>
void CStack<T>::push(T t)
{
	CStack *pBufferNode = nullptr;

	// Check if this stack is isEmpty
	if (isEmpty()) // This stack is isEmpty
	{
		m_pCurrentNode = new CStack();
		m_pCurrentNode->m_oData = t;
	}
	else // This stack is not isEmpty
	{
		pBufferNode = m_pCurrentNode; // Save the current node

		// Create a new node and assign the specified value to it
		m_pCurrentNode = new CStack<T>();
		m_pCurrentNode->m_oData = t;

		m_pCurrentNode->m_pNextNode = pBufferNode; // Next node will be our previous node
	}

}

//-------------------------------------------------------------------
// Name: pop
// Desc: Pop an item off the stack
//-------------------------------------------------------------------
template<typename T>
void CStack<T>::pop()
{
	CStack *pBufferNode = nullptr;

	// Check if this stack is isEmpty
	if (isEmpty()) // This stack is isEmpty
	{
		return;
	}
	else // This stack is not isEmpty
	{

	}
}

//-------------------------------------------------------------------
// Name: size
// Desc: Returns the number of elements in the stack
//-------------------------------------------------------------------
template<typename T>
int CStack<T>::size()
{
	return m_nNumberOfItems;
}

//-------------------------------------------------------------------
// Name: isEmpty
// Desc: Returns a boolean value indicating if this container is isEmpty
//		 or not
//-------------------------------------------------------------------
template<typename T>
bool CStack<T>::isEmpty() const
{
	return m_pCurrentNode == nullptr;
}

//-------------------------------------------------------------------
// Name: clear
// Desc: Clear the contents of this stack
//-------------------------------------------------------------------
template<typename T>
void CStack<T>::clear()
{

}