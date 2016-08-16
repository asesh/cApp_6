//
//

#ifndef CIRCULARLINKEDLIST_H
#define CIRCULARLINKEDLIST_H

template<typename T>
struct SCircularNode
{
	SCircularNode(T tData)
	{
		m_tData = tData;

	}

	T m_tData;
	SCircularNode *m_pNextNode;
};

template<typename T>
class CCircularLinkedList
{
public:
	CCircularLinkedList()
	{
	}

	~CCircularLinkedList()
	{
		empty();
	}

	void push(T tData)
	{

	}

	void empty()
	{
		if (m_pHeadNode)
		{
			do
			{
				
			} while()
		}
	}

private:
	SCircularNode *m_pHeadNode;
};

#endif // CIRCULARLINKEDLIST_H