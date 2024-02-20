#include <iostream>
using namespace std;
template <class T>
class Queue
{
	T* queue;
	int count;
	int size;
	int front;
	int rear;
public:
	Queue(int s = 10)
	{
			queue = new T[s];
			size = s;
			front = -1;
			rear = -1;
			count = 0;
	}
	void inQueue(T val)
	{
		if (isFull())
		{
			reSize();
		}
		rear = (rear + 1) % size;
		queue[rear] = val;
		count++;
		if (front == -1)
		{
			front++;
		}
	}
	void deQueue()
	{
		if (!isEmpty())
		{
			front = (front + 1) % size;
			count--;
		}
		else
			cout << "Queue is empty";
	}
	bool isEmpty()
	{
		return count == 0;
	}
	bool isFull()
	{
		return count == size;
	}
	T peek()
	{
		return queue[rear];
	}
	void display()
	{
		cout << "Elements in queue are following : " << endl;
		int temp = front;
		while(temp!=rear)
		{
			cout << queue[temp] << endl;
			temp = (temp+ 1) % size;
		}
		cout << queue[temp] << endl;
	}
	void reSize()
	{
		T* temp=nullptr;
		temp = new T[2 * size];
		int i;
		for (i =0; front!=rear;i++ )
		{
			temp[i] = queue[front];
			front=(front+1)%size;
		}
		temp[i] = queue[front];
		front = 0;
		rear = i;
		size = 2 * size;
		delete [] queue;
		queue = temp;
	}
};
int main()
{
	Queue<int> q1(5);
	q1.inQueue(12);
	q1.inQueue(23);
	q1.inQueue(34);
	q1.inQueue(56);
	q1.inQueue(76);
	q1.inQueue(7);
	q1.inQueue(0);
	q1.display();
	q1.deQueue();
	q1.deQueue();
	q1.deQueue();
	q1.deQueue();
	q1.deQueue();
	q1.display();
	return 0;
}