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

#endif // QUEUE_H