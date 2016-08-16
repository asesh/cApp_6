//
//

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

template<typename T>
struct SDoublyNode
{
	SDoublyNode(T tData)
	{

	}
};

template<typename T>
class CDoublyLinkedList
{
public:
	CDoublyLinkedList()
	{

	}

private:
	SDoublyNode<T> *m_pDoublyNode;
};

#endif // DOUBLYLINKEDLIST_H