//
//

#include "StdAfx.h"
#include "Queue.h"
#include "Stack.h"
#include "LinkList.h"
#include "CircularLinkedList.h"
#include "DoublyLinkedList.h"

void printPrimeNumbers(int nNumberofPrimeNumbers)
{
	int nInput, nFlag = 0;
	cout << "Enter an integer: ";
	cin >> nInput;

	int nCounter = 2;

	for (nCounter = 2; nCounter <= nInput / 2; nCounter++)
	{
		if (nInput % nCounter == 0)
		{
			nFlag = 1;
			break;

		}
	}
	if (nFlag == 0)
		std::cout << nInput << " is a prime number" << std::endl;
	else
		std::cout << nInput << " is not a prime number" << std::endl;
}

void bubbleSort()
{
	int nArray[] = { 2, 5, 1, 4, 6, 8, 10 };

	int nBuffer = 0;

	int nNumberOfElements = sizeof(nArray) / sizeof(decltype(nArray)); // Number of elements in this array

	for (int nCount = 0; nCount < (nNumberOfElements - 1); nCount++)
	{
		for (int nSubCount = 0; nSubCount < nNumberOfElements - nCount - 1; nSubCount++)
		{
			if (nArray[nSubCount] > nArray[nSubCount + 1])
			{
				nBuffer = nArray[nSubCount];
				//nArray[nSubCount] = 
			}
		}
	}
}

struct S
{
	unsigned int m_n : 1;

	int func()
	{
	}
};

//class CStream
//{
//	friend void operator<<(std::ostream oStream, std::string);
//public:
//	//std::ostream operator<<(int nNumber)
//	//{
//	//	return std::cout << nNumber;
//	//}
//};

//void operator<<(std::ostream oStream, std::string oString)
//{
//	//oStream << oString;
//
//	oStream.
//}

struct SData
{
	int nNumber : 1;
};

int _tmain()
{
#ifdef _DEBUG

	::_CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);

#endif // _DEBUG

	//S oS;
	//oS.m_n = 0x2;
	//std::cout << oS.m_n << std::endl;

	// Fresh downcast
	//Derived *pDerived = dynamic_cast<Derived *>(new SuperBase);
	//pDerived->foo();
	//delete pDerived;


	//std::stringstream oStringStream;
	//oStringStream << "hello this is my number " << 934343 << " so what would you like to do? : " << 1.2f << std::endl;
	//std::cout << oStringStream.str() << std::endl;

	//*pPointer = 12;

	//delete pBase;

	//for (int nRowCount = 0; nRowCount < 10; nRowCount++)
	//{
	//	for (int nColumnCount = 0; nColumnCount < 10; nColumnCount++)
	//	{
	//		if (nRowCount == nColumnCount)
	//			std::cout << "*";
	//		else
	//			std::cout << " ";
	//	}

	//	std::cout << std::endl;
	//}

	//S s;
	//s.m_n = 0x1;
	//std::cout << s.m_n << std::endl;

	//CCircularLinkedList<int> oLinkedList;
	//oLinkedList.push(1);
	//oLinkedList.push(2);
	//oLinkedList.push(3);

	//printPrimeNumbers(4);

	// Implementation of my queue container
	//CQueue<char *> oQueue;
	//oQueue.enqueue("A");
	//oQueue.enqueue("B");
	//oQueue.enqueue("C");
	//oQueue.displayContents();


	// Impelementation of my stack container
	//CStack<wchar_t *> oStack;
	//oStack.push(L"a");
	//oStack.push(L"b");
	//oStack.push(L"c");
	//oStack.push(L"d");
	//oStack.displayContents(); 

	//printPrimeNumbers(1, 20);

	//B b(12.0f);

	//CQueueNode<int> oQueueNode;
	//oQueueNode.enqueue(12);
	//oQueueNode.enqueue(13);
	//oQueueNode.enqueue(14);
	//oQueueNode.displayContents();

	::system("pause");
	return 0;
}
