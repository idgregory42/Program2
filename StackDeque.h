/*
	Name: Ian David Gregory
	Class: CSC2110-002
	Date: 06 October 2016
*/

#if !defined NULL
#define NULL 0
#endif

#if !defined (STACKDEQUE_H)
#define STACKDEQUE_H

#include "DequeArray.h"

template < class T>
class StackDeque
{
	private:
		
		DequeArray<T>* dqA;
	
	public:
	
		StackDeque();
		~StackDeque();
		
		int size();
		
		bool isEmpty();
		
		/*
			Pre:  None
			post: Returns the item in the back of the queue
		*/
		T* peek();
		
		/*
			Pre:  None
			post: Deletes the items in the back of the queue
		*/		
		T* pop();
		
		/*
			pre: none
			post: Removes all items from the queue
		*/
		void popAll();
		
		/*
			Pre: None
			Post: The item is inserted into the back of the queue
		*/
		void push(T* item);
};

template < class T >
StackDeque<T>::StackDeque()
{
	dqA = new DequeArray<T>(); 
}

template < class T >
StackDeque<T>::~StackDeque()
{
	popAll();
}

template < class T >
int StackDeque<T>::size()
{
	return dqA->size();
}

template < class T >
bool StackDeque<T>::isEmpty()
{
	return dqA->isEmpty();  
}

template < class T >
T* StackDeque<T>::peek()
{
	return dqA->peekDeque(); 
}

template < class T >
T* StackDeque<T>::pop()
{
	return dqA->dequeueDeque(); 
}

template < class T >
void StackDeque<T>::popAll()
{
	dqA->dequeueAll(); 
}

template < class T >
void StackDeque<T>::push(T* item)
{
	dqA->enqueue(item); 
}



#endif