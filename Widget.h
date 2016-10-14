/*
	Name: Ian David Gregory
	Class: CSC2110-002
	Date: 06 October 2016
*/

#if !defined NULL
#define NULL 0
#endif

#if !defined (WIDGETS_H)
#define WIDGETS_H

#include "DequeArray.h"

class Widget
{
	private:
	
		double cost_each;
		
	public:
	
		Widget(double price);
		~Widget();
		
		/*
			Pre: None
			Post: returns a double
		*/
		double getCost();
};


#endif