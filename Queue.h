//
//

#ifndef QUEUE_H
#define QUEUE_H

template<typename T>
class CQueue
{
public:
	CQueue();
	~CQueue();

	void enqueue(T t); // Insert an item into the queue
	void dequeue(); // Remove the first item off the queue
	void clear(); // Clear the contents of this queue
	bool isEmpty(); // Determines if this queue is empty

	void displayContents();

private:
	CQueue *m_pFirstNode, *m_pNextNode; // Nodes

	T m_oData; // Templatized data
};

template<typename T>
CQueue<T>::CQueue()
{
	m_pFirstNode = m_pNextNode = nullptr;
}

template<typename T>
CQueue<T>::~CQueue()
{
	clear(); // Clear all the items of this container
}

template<typename T>
void CQueue<T>::enqueue(T t)
{
	CQueue<T> *pBufferNode = nullptr;

	if (m_pFirstNode == nullptr) // This container is empty
	{
		// Create a new node and assign the specified data to it
		m_pFirstNode = new CQueue<T>();
		m_pFirstNode->m_oData = t; 
	}
	else // This container is not empty
	{
		pBufferNode = m_pFirstNode->m_pNextNode;

		// Create a new node and assign the specified values
		pBufferNode = new CQueue<T>(); // 
		pBufferNode->m_oData = t;

		m_pFirstNode->m_pNextNode = pBufferNode;
	}
}

template<typename T>
void CQueue<T>::dequeue()
{
	CQueue *pBufferNode = nullptr;

	// Check if this container is empty
	if (isEmpty())
		return;
	else
	{
		pBufferNode = m_pFirstNode->m_pNextNode;
		delete m_pFirstNode;

		pBufferNode->m_pNextNode = pBufferNode->m_pNextNode->m_pNextNode;
	}
}

template<typename T>
void CQueue<T>::clear()
{
	// Check if this container is empty
	if (isEmpty())
		return;
}

template<typename T>
bool CQueue<T>::isEmpty()
{
	return m_pFirstNode == nullptr;
}

template<typename T>
void CQueue<T>::displayContents()
{
	CQueue *pBufferNode = nullptr;

	if(isEmpty())
		return;

	pBufferNode = m_pFirstNode; // Assign the first node

	// This container is not empty
	do
	{

		if (pBufferNode == nullptr)
			return;

		std::cout << pBufferNode->m_oData << std::endl;

		pBufferNode = pBufferNode->m_pNextNode; // Assign the later node
	} while (pBufferNode != nullptr);
}

#endif // QUEUE_H