//
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template<typename T>
struct SNode
{
	SNode(T tData)
	{
		m_tData = tData;
		m_pNextNode = nullptr;
	}

	T m_tData;
	SNode *m_pNextNode;
};

template<typename T>
class CLinkedList
{
public:
	CLinkedList()
	{
		m_pNextNode = nullptr;
	}
	CLinkedList(T tData)
	{
		m_pNextNode = nullptr;
		
		m_tData = tData;
	}
	~CLinkedList()
	{
		empty();

		delete this;
	}

	void push(T tData)
	{
	}

	void pop()
	{
	}

	void empty()
	{
	}

	bool isEmpty() const
	{
		return m_pHeadNode == nullptr;
	}

	void reverse()
	{

	}

	void displayAllItems() const
	{
	}

private:

	SNode<T> *m_pHeadNode;
};

#endif // LINKEDLIST_H