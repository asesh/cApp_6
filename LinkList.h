//
//

#ifndef LINKLIST_H
#define LINKLIST_H

template<typename T>
struct SNode
{
	SNode(T tData)
	{
		m_tData = tData;

		m_pNextNode = nullptr;
	}

	SNode *m_pNextNode;

	T m_tData;
};

template<typename T>
class CLinkList
{
public:
	CLinkList()
	{
		m_pHeadNode = nullptr;
	}

	~CLinkList()
	{
		empty();
	}

	void push(T tData)
	{
		if (m_pHeadNode) // Head node is already present
		{
			SNode<T> *pBufferNode = m_pHeadNode;

			SNode<T> *pNewHeadNode = new SNode<T>(tData);
			m_pHeadNode = pNewHeadNode;

			m_pHeadNode->m_pNextNode = pBufferNode;
		}
		else // Head node is not present
		{
			m_pHeadNode = new SNode<T>(tData);
		}
	}

	bool isEmpty() const
	{
		return !!m_pHeadNode;
	}

	void empty()
	{
		if (!m_pHeadNode)
			return;

		do
		{
			SNode<T> *pNextNode = m_pHeadNode->m_pNextNode;
			delete m_pHeadNode;
			m_pHeadNode = pNextNode;
		} while (m_pHeadNode != nullptr);
	}

private:
	SNode<T> *m_pHeadNode;

	T m_tData;
};

#endif // LINKLIST_H