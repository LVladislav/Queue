#include "Queue.h"


Queue::Queue()
{
	first = -1;
	last = Size-1;
	Size = SizeMem;
	pMem = new int[Size];
	for (int i = 0; i < Size;i++)
	{
		pMem[i] = 0;
	}
}

Queue::Queue(int n)
{
	first = -1;
	last = Size-1;
	Size = n;
	pMem = new int[Size];
	for (int i = 0; i < Size; i++)
	{
		pMem[i] = 0;
	}
}

Queue::Queue(const Queue &s)
{
	first = s.first;
	last = s.last;
	Size = s.Size;
	pMem = new int[Size];
	for (int i = 0; i < Size; i++)
	{
		pMem[i] = s.pMem[i];
	}
}


void Queue::Push(const int val)
{
	if (first == -1)
	{
		first = 0; // ������� �� ������, ��� �������� 1�� �������
		last = 0;
	}
	else
	{
		first++;
		if (first == Size) // ���� ����� �� ����� �������, �� ������ �� ������
		{
			first = 0;
		}
	
	}
	pMem[first] = val;
}

int Queue::Pop(void)
{
	int i = pMem[last]; // ������������ ������� 
	last++;
	if (last == Size) // ���� ����� �� ����� �������, �� ������ �� ������
	{
		last = 0;
	}
	return i;
	//return pMem[last];
}

Queue::~Queue()
{
	delete[]pMem;
}


