//
//

#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

template<typename T>
class CCircularLinkedList
{
public:

	CCircularLinkedList()
	{
		m_pNextNode = nullptr;
	}

	CCircularLinkedList(T tData)
	{
		m_pNextNode = nullptr;

		m_tData = tData;
	}

	~CCircularLinkedList()
	{
		empty();
	}

	void push(T tData)
	{
		if (m_pNextNode)
		{
			CCircularLinkedList *pBufferNode = m_pNextNode;
			m_pNextNode = new CCircularLinkedList(tData);
			m_pNextNode->m_pNextNode = pBufferNode;
		}
		else // Node(s) are present
		{
			m_pNextNode = new CCircularLinkedList<T>(tData);
			m_pNextNode->m_pNextNode = m_pNextNode;
		}
	}

	void empty()
	{
		if (m_pNextNode == nullptr)
			return;

		do
		{
			CCircularLinkedList *pBufferNode = m_pNextNode->m_pNextNode;
			delete m_pNextNode;

			m_pNextNode = pBufferNode;
		} while (m_pNextNode != nullptr);
	}

private:
	CCircularLinkedList *m_pNextNode;

	T m_tData;
};

#endif // CIRCULARLINKEDLIST_H