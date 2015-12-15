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
		first = 0; // смотрит на начало, что добавлен 1ый элемнет
		last = 0;
	}
	else
	{
		first++;
		if (first == Size) // если дошли до конца массива, то ставим на начало
		{
			first = 0;
		}
	
	}
	pMem[first] = val;
}

int Queue::Pop(void)
{
	int i = pMem[last]; // возвращаемый елемент 
	last++;
	if (last == Size) // если дошли до конца массива, то ставим на начало
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


