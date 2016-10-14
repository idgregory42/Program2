/*
	Name: Ian David Gregory
	Class: CSC2110-002
	Date: 06 October 2016
*/

#if !defined (INVENTORYMANAGER_H)
#define INVENTORYMANAGER_H

#include "StackDeque.h"
#include "QueueDeque.h"
#include "Widget.h"

class InventoryManager
{
	private:
	
		StackDeque<Widget>* plate;
		QueueDeque<Widget>* line;
		bool isFIFO;
		double profit;
	
	public:
	
		InventoryManager(int inventory_choice);
		~InventoryManager();

		/*
			Pre: none
			Post:  Puts the widgets into the queue or stack depending on the user specified choice
		*/
		void buyWidgets(double cost_each, int num_to_buy);
		
		/*
			Pre: none
			Post: Returns the total profit
		*/
		double getTotalProfit();
		
		/*
			Pre: none
			Post:  Removes the widgets from the queue or stack and returns the profit from that transaction
		*/		
		double sellWidgets(double price, int num_to_sell);
};

#endif