//
//

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

template<typename T>
class CDoublyLinkedList
{
public:
	CDoublyLinkedList()
	{
		m_pPrevNode = m_pNextNode = nullptr;
	}
	CDoublyLinkedList(T tData)
	{
		m_tData = tData;

		m_pCurrentNode = m_pNextNode = nullptr;
	}

	~CDoublyLinkedList()
	{
		empty();
	}

	void push_back(T tData)
	{
		CDoublyLinkedList *pBufferNode = new CDoublyLinkedList(tData);
		if (m_pNextNode)
		{
			m_pNextNode->m_pNextNode = pBufferNode;
		}
		else
		{
			m_pNextNode = pBufferNode;
		}
	}

	void push_front(T tData)
	{
		CDoublyLinkedList *pBufferNode = m_pCurrentNode;
		if (m_pCurrentNode) // A front node already exists
		{
			m_pCurrentNode = new CDoublyLinkedList(tData);
			m_pCurrentNode->m_pNextNode = pBufferNode;
		}
		else // A front node doesn't exist
		{
			m_pCurrentNode = new CDoublyLinkedList(tData);
		}
	}

	void empty()
	{

	}

private:
	CDoublyLinkedList *m_pCurrentNode, *m_pNextNode;
};

#endif // DOUBLYLINKEDLIST_H