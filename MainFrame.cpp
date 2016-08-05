//
//

#include "StdAfx.h"
#include "Queue.h"
#include "Stack.h"
#include "LinkedList.h"
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
	//int nI = 3, nSubCount = 0;

	//int nNumberOfPrimeNumbers;
	//cin >> nNumberOfPrimeNumbers;
	//for (int nCount = 2; nCount <= nNumberOfPrimeNumbers; nCount++)
	//{
	//	for (nSubCount = 2; nSubCount <= nI - 1; nSubCount++)
	//	{
	//		if (nI % nSubCount == 0)
	//			break;
	//	}
	//}

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

	//std::future<void> oFuture = std::async(trySomething, 1);
	//std::cout << "Waiting for the asynchronous operation to complete" << std::endl;
	//oFuture.wait();

	//std::cout << "Finished waiting for the asynchronous operation to complete" << std::endl;

	//for (int nRowCount = 0; nRowCount < 10; nRowCount++)
	//{
	//	for (int nColumnCount = 0; nColumnCount < nRowCount; nColumnCount++)
	//	{
	//		std::cout << "*";
	//	}

	//	std::cout << std::endl;
	//}

	//CCircularLinkedList<int> oLinkedList;
	//oLinkedList.push(1);
	//oLinkedList.push(2);
	//oLinkedList.push(3);

	/*trySomething();*/

	//std::thread oThread1(thread1);
	//std::thread oThread2(thread2);
	//oThread1.join();
	//oThread2.join();

	//std::thread oProcessMemoryThread(processMemoryDataThreadProc, 0.100);
	//std::thread oAccumulateDecodedData(accumulateDecodedData);
	//oProcessMemoryThread.join();
	//oAccumulateDecodedData.join();

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


	//TCHAR szBuffer;
	//fstream createFile, openFile;
	//createFile.open("BinaryFileFormat.txt", ios_base::out | ios_base::binary);
	////file.open("hello.txt", ios_base::in | ios_base::binary);
	////while(file>>szBuffer)
	//	//cout<<hex<<(int) szBuffer<<"\n";

	///* File format
	//---------------------------------------
	//Hexas	Code	Desc
	//---------------------------------------
	//3f 03	02		Specifies file version
	//7b 24	c0-c9	Specifies the active weapon
	//7c c0	1-2		SMG; 1 specifies it exists and 2 specifies it does not
	//7c c1	0-ffff	SMG's bullet count
	//7d c0	1-2		AK-47; 1 specifies it exits and 2 specifies it does not
	//7d c1	0-ffff	AK-47's bullet count
	//7e c0	1-2		Pistol; 1 specifies it exits and 2 specifies it does not
	//7e c1	0-ffff	Pistol's bullet count
	//7f c0	1-2		Grande; 1 specifies it exits and 2 specifies it does not
	//7f c1	0-ffff	Grenade count
	//80 c0	1-2		Missile; 1 specifies it exits and 2 specifies it does not
	//80 c1	0-ffff	Missile count
	//81 c0	1-2		Knife; 1 specifies it exists and 2 specifies it does not
	//*/
	//createFile<<"\x01\x22\x3\x66\x21\x88\x7f\xdd\xcc\x99\x22\x24\xdd\xdd\xbc\xe\xab\xba\xee\xec\xdd\xeb"
	//	<<"\x20\x20\xff\xff\xcc"
	//	<<"\x3f\x03\x02" // File version
	//	<<"\x7b\x24\xc0" // The active weapon
	//	<<"\x7c\xc0\x01" // Presence of SMG
	//	<<"\x7c\xc1\x01\x22" // SMG's bullet count
	//	<<"\x7d\xc0\0x1" // Presence of AK-47
	//	<<"\x7d\0xc1\x01\xff" // AK-47's bullet count
	//	<<"\x7e\xc0\x01" // Presence of pistol
	//	<<"\x7e\xc1\x01\xcc" // Pistol's bullet count
	//	<<"\x7f\xc0\x02" // Presence of grenade
	//	<<"\x7f\xc1\x01\x01" // Grenade count
	//	<<"\x80\xc0\x02" // Presence of missile launcher
	//	<<"\x80\xc1\x01\x01" // Missile count
	//	<<"\x81\xc0\x01" // Presence of knife
	//	<<"\xee\xec\xdd\xeb\x20\x20\x20"
	//	<<"\x88\x20\xff\xff\xff\x7f";

	//if(createFile.is_open())
	//	createFile.close();
	//::ShellExecute(NULL, "open", "BinaryFileFormat.txt", NULL, NULL, SW_SHOW);
	//_getch();
	//::DeleteFile("BinaryFileFormat.txt");

	::system("pause");
	return 0;
}
