/*
	Name: Ian David Gregory
	Class: CSC2110-002
	Date: 06 October 2016
*/


#if !defined NULL
#define NULL 0
#endif

#if !defined (DEQUEARRAY_H)
#define DEQUEARRAY_H

template < class T >
class DequeArray
{
	private:
	
		
		int max_queue;
		int sz;
		T** items;
		int front;
		int back;
		
		
		void arrayResize(int new_size);
		
	public:
	
		
		DequeArray();
		~DequeArray();
		
		bool isEmpty();
		
		int size();
		
		/*
			Pre: None
			Post: removes all items from the array
		*/
		void dequeueAll();
		
		/*
			Pre: None
			Post: Returns the item at the front of the queue.
				  If the queue is empty it returns NULL.
		*/		
		T* peek();
		
		/*
			Pre: None
			Post: The items is inserted into the back of the queue
		*/		
		void enqueue(T* item);
		
		/*
			Pre: None
			Post:  Deletes the item in the front of the queue
		*/		
		T* dequeue();
		/*
			Pre:none 
			Post: returns item at the back of the queue
		*/		
		T* peekDeque();
		/*
			Pre:None 
			Post: Deletes the items in the back of the queue
		*/		
		void enqueueDeque(T* item);
		/*
			Pre:None
			Post: Deletes the items in the back of the queue
		*/		
		T* dequeueDeque();
	
};

template < class T >
DequeArray<T>::DequeArray()
{
	max_queue = 2;
	sz = 0;
	items = new T*[max_queue];
	
	front = 0;
	back  = (max_queue - 1);
}

template < class T >
DequeArray<T>::~DequeArray()
{
	delete[] items;
}

template < class T >
bool DequeArray<T>::isEmpty()
{
	return (sz == 0);
}

template < class T >
int DequeArray<T>::size()
{
	return sz;
}

template < class T >
T* DequeArray<T>::dequeueDeque()
{
	T* item = NULL;
	
	if(!isEmpty())
	{
		item = items[back];
		items[back] = NULL;
		back -= 1;
		if(back < 0 ) back = (max_queue - 1);
		sz--;
	}
	
	return item;
}

template < class T >
T* DequeArray<T>::peekDeque()
{
	T* item = NULL;
	if(!isEmpty()) item = items[back];
	
	return item;
}

template < class T >
void DequeArray<T>::enqueueDeque(T* item)
{
	if(sz == max_queue) arrayResize(2*max_queue);
	front -= 1;
	if(front < 0) front = (max_queue - 1);
	items[front] = item;
	sz++;
}

template < class T >
void DequeArray<T>::dequeueAll()
{
	delete[] items;
	max_queue = 2;
	items = new T*[max_queue];
	front = 0;
	back = max_queue - 1;
	sz = 0;
	
}

template < class T >
T* DequeArray<T>::peek()
{
	T* item = NULL;
	if(!isEmpty()) item = items[front];
	return item;
}

template < class T >
void DequeArray<T>::enqueue(T* item)
{
	if(sz == max_queue) arrayResize(2*max_queue);
	back += 1;
	//back = ((back + 1) % max_queue);
	if(back == max_queue) back = 0;
	items[back] = item;
	sz++;
}

template < class T >
T* DequeArray<T>::dequeue()
{
	T* item = NULL;
	
	if(!isEmpty())
	{
		item = items[front];
		items[front] = NULL;
		front += 1;
		//front = ((front + 1) % max_queue);
		if(front == max_queue) front = 0;
		sz--;
	}
	return item;
}

template < class T >
void DequeArray<T>::arrayResize(int new_size)
{
   T** temp = new T*[new_size];
   int j = front;
   
   for (int i = 0; i < sz; i++)
   {
      temp[i] = items[j];
      j++;
      if (j == max_queue) j = 0;
   }
   
   front = 0;
   back = sz - 1;
   max_queue = new_size;

   delete[] items;
   items = temp;
}

#endif