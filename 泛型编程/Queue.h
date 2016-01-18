#ifndef _QUEUE_H
#define _QUEUE_H

template <class T>
class Queue
{
public:
	Queue(int queueCapacity=10);
	~Queue();
	inline bool IsEmpty()const;
	T&Front()const;
	T&Rear()const;
	void Push(const T&item);
	void Pop();
private:
	T*queue;
	int front;
	int rear;
	int Capacity;
};
template<class T>
Queue<T>::Queue(int queueCapacity) :Capacity(queueCapacity) 
{
	if (Capacity < 1)
		throw "Queue capacity must be >0";
	queue = new T[Capacity];
	front = rear = 0;

}
template<class T>
inline bool Queue<T>::IsEmpty()const
{
	return front == rear;
}
template <class T>
void Queue<T>::Push(const T&item)
{
	/*if (rear == Capacity - 1)
		rear = 0;
	else
		rear++;*/
	if ((rear + 1) % Capacity == front)
	{
		T*newQueue = new T[Capacity*2];
		int start = (front + 1) % Capacity;
		if (start < 2)
			copy(queue + start, queue + start + Capacity - 1, newQueue);
		else
		{
			copy(queue + start, queue + Capacity, newQueue);
			copy(queue, queue + rear + 1, newQueue + Capacity - start);;

		}
		front = 2 * Capacity - 1;
		rear = Capacity - 2;
		Capacity *= 2;
		delete[] queue;
		queue = newQueue;

	}
	rear = (rear + 1) % Capacity;
	queue[rear] = item;

}
template<class T>

inline T&Queue<T>::Front()const
{
	if (IsEmpty())
		throw "Queue is empty";
	return queue[(front+1)%Capacity];
}
template<class T>
inline T& Queue <T>::Rear()const
{
	if (IsEmpty())
		throw "queue is empty";
	return queue[rear];
}
template <class T >
void Queue<T>::Pop()
{
	if (IsEmpty())
		throw "Queue is empty";
	front = (front + 1) % Capacity;
	queue[front].~T();
}
#endif
