//
//

#include "StdAfx.h"
#include "Queue.h"
#include "Stack.h"
#include "LinkList.h"
#include "CircularLinkedList.h"
#include "DoublyLinkedList.h"

int factorization(int nNumber)
{
	if(nNumber == 0)
		return nNumber;

	return factorization(nNumber - 1) * factorization(nNumber - 2);
}

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

std::mutex g_oGlobalMutex;
std::condition_variable g_oWaitCondition;

void thread1()
{
	std::unique_lock<std::mutex> lockGlobalMutex(g_oGlobalMutex);

	g_oWaitCondition.wait(lockGlobalMutex);

	std::cout << "Initialization of thread1" << std::endl;

	std::this_thread::sleep_for(std::chrono::seconds(2));

	std::cout << "Exiting thread1" << std::endl;
}

void thread2()
{
	std::unique_lock<std::mutex> lockGlobalMutex(g_oGlobalMutex);

	g_oWaitCondition.wait(lockGlobalMutex);

	std::cout << "Initialization of thread2" << std::endl;

	std::this_thread::sleep_for(std::chrono::seconds(2));

	std::cout << "Exiting thread2" << std::endl;
}

void trySomething(int)
{
	std::this_thread::sleep_for(std::chrono::seconds(2));
}

int _tmain()
{
#ifdef _DEBUG

	::_CrtSetDbgFlag(_CRTDBG_LEAK_CHECK_DF | _CRTDBG_ALLOC_MEM_DF);

#endif // _DEBUG

	::SetConsoleTitle("Asesh");

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
