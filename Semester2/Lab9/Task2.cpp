/*
Create a queue, size of queue will be dependent on the user. 
Insert the numbers in the queue till the queue reaches the size.
Create a menu and perform the following function on that queue.

Enqueue: Add an element to the end of the queue
Dequeue: Remove an element from the front of the queue
IsEmpty: Check if the queue is empty
IsFull: Check if the queue is full
Peek: Get the value of the front of the queue without removing it


*/
#include <iostream>
using std::cout;
using std::cin;
const int size = 5;
class Queue
{
	int front, rear, * ptr;
public:
	Queue() :front(-1), rear(-1) { ptr = new int[size]; }
	int Allocate()
	{
		int x;
		cout << "\nEnter a number to enter in queue.";
		cin >> x;
		return x;
	}
	void Dequeue()
	{
		front++;
		cout << "\nRemoving First Number\nQueue starting from: ";
		cout << ptr[front];
	}
	bool IsEmpty()
	{
		if (front == rear)
		{
			return true;
		}
		else return false;
	}
	bool IsFull()
	{
		if (rear == size)
		{
			return true;
		}
		else return false;
	}
	void Enqueue()
	{
		// check queue is full or not
		if (size == rear) {
			cout << "\nQueue is full\n";
		}

		// insert element at the rear
		else {
			ptr[rear] = Allocate();
			rear++;
		}
	}
	void Peek()
	{
		cout << "\nNumbers are: \n" << ptr[front];
	}
};
int main()
{
	Queue a;
	a.Enqueue();
	a.Enqueue();
	a.Peek();
	if ( a.IsFull() == 1)
		{
		cout << "\nOVERLOADED\n";
		}
	else if (a.IsEmpty() == 1)
	{
		cout << "\nQueue not initialized yet\n";
	}
	a.Dequeue();
}