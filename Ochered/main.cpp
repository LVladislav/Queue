#include "Queue.h"
int main()
{
	Queue Op(30); // одна штука, длинной 30 элементов. Очредь
	Queue Op1(10);
	
	for (int i = 0; i < 30; i++)
	{
		Op.Push(i);
	}
	for (int i = 0; i < 30; i++)
	{
		cout << Op.Pop() << ' ';
	}
	for (int i = 0; i < 10; i++)
	{
		Op1.Push(i);
	}
	for (int i = 0; i < 10; i++)
	{
		cout << Op1.Pop() << ' ';
	}
	
	cout << endl;
	return 0;
}