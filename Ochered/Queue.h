#pragma once
#include <iostream>
using namespace std;
#define SizeMem 10
class Queue
{
private:
	int *pMem;
	int Size;
	int first;
	int last;
public:
	Queue();
	Queue(int n);
	Queue(const Queue &s);
	~Queue();
	void Push(const int val);
	int Pop();
};

