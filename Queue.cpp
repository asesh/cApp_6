//
//

//#include "StdAfx.h"
//#include "Queue.h"
//
//template<typename T>
//class CQueueNode;
//
//template<typename T>
//CQueueNode<T>::CQueueNode()
//{
//	m_pCurrentNode = m_pNextNode = nullptr;
//}
//
//template<typename T>
//CQueueNode<T>::~CQueueNode()
//{
//	this->empty();
//}
//
//template<typename T>
//void CQueueNode<T>::enqueue(T t)
//{
//	CQueueNode<T> *pBuffNode;
//	CQueueNode<T> *pNewNode = new CQueueNode<T>;
//	pNewNode->m_Data = t; // 
//
//	// Now check if this queue is empty
//	if(isEmpty())
//	{
//		m_pCurrentNode = pNewNode;
//	}
//	else // Is not empty
//	{
//		pBuffNode = m_pCurrentNode;
//		m_pCurrentNode = pNewNode;
//		m_pNextNode = pBuffNode;
//	}
//}
//
//template<typename T>
//void CQueueNode<T>::dequeue()
//{
//	CQueueNode<T> *pBuffNode;
//
//	if(isEmpty())
//		return;
//
//	// It's not empty
//	pBuffNode = m_pNextNode;
//	if(m_pCurrentNode)
//		delete m_pCurrentNode;
//	m_pCurrentNode = pBuffNode;
//}
//
//template<typename T>
//void CQueueNode<T>::empty()
//{
//	if(isEmpty())
//		return;
//
//	CQueueNode<T> *pBuffNode;
//
//	pBuffNode = m_pCurrentNode;
//
//	do
//	{
//		pBuffNode = m_pNextNode;
//		delete m_pCurrentNode;
//		m_pCurrentNode = pBuffNode;
//	} while(pBuffNode != nullptr);
//}
//
//template<typename T>
//bool CQueueNode<T>::isEmpty()
//{
//	return m_pQueueNode == nullptr;
//}
//
//template<typename T>
//void CQueueNode<T>::displayContents()
//{
//	if(isEmpty())
//		return;
//
//	CQueueNode<T> *pBuffNode = m_pCurrentNode;
//
//	do
//	{
//		std::cout<<pBuffNode->m_Data;
//		pBuffNode = pBuffNode->m_pNextNode;
//	} while(pBuffNode != nullptr);
//}