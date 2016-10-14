/*
	Name: Ian David Gregory
	Class: CSC2110-002
	Date: 06 October 2016
*/

#if !defined NULL
#define NULL 0
#endif

#if !defined (QUEUEDEQUE_H)
#define QUEUEDEQUE_H

#include "DequeArray.h"

template < class T >
class QueueDeque
{
	
	private:
	
		DequeArray<T>* dqA;
	
	public:
	
		QueueDeque();
		~QueueDeque();

		bool isEmpty();
		int size();

		/*
			Pre: None
			Post: Removes all items from queue
		*/		
		void dequeueAll(); 
		
		/*
			Pre: None
			Post: Puts item into the back of the queue
		*/
		void enqueue(T* item);
		
		/*
			Pre: None
			Post: Returns the items at the front of the queue
		*/
		T* peek();

		/*
			Pre: None
			Post: Deletes the item in the front of the queue
		*/
		T* dequeue();
};

template < class T >
QueueDeque<T>::QueueDeque()
{
	dqA = new DequeArray<T>();
}

template < class T >
QueueDeque<T>::~QueueDeque()
{
	dequeueAll();
}

template < class T >
bool QueueDeque<T>::isEmpty()
{
	return dqA->isEmpty();
}

template < class T >
int QueueDeque<T>::size()
{
	return dqA->size();
}

template < class T >
void QueueDeque<T>::dequeueAll()
{
	dqA->dequeueAll();
}

template < class T >
T* QueueDeque<T>::peek()
{
	return dqA->peek();
}

template < class T >
T* QueueDeque<T>::dequeue()
{
	return dqA->dequeue();
}

template < class T >
void QueueDeque<T>::enqueue(T* item)
{
	dqA->enqueue(item);
}

#endif