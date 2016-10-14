/*
	Name: Ian David Gregory
	Class: CSC2110-002
	Date: 06 October 2016
*/

#include "InventoryManager.h"
#include "StackDeque.h"
#include "QueueDeque.h"
#include "Widget.h"

#include "CSC2110/Text.h"
using CSC2110::String;
#include "CSC2110/Valtostr.h"
using CSC2110::Valtostr;

InventoryManager::InventoryManager(int inventory_choice)
{
	
	profit = 0.0;
	
	if(inventory_choice == 2)
	{
		line = new QueueDeque<Widget>();
		isFIFO = true;
	}
	else
	{
		plate = new StackDeque<Widget>();
		isFIFO = false;
	}
}

InventoryManager::~InventoryManager()
{
	if(isFIFO)
	{
		delete line;
		line = NULL;
	}
	else
	{
		delete plate;
		plate = NULL;
	}
}

void InventoryManager::buyWidgets(double cost_each, int num_to_buy)
{
	
	
	for (int i = num_to_buy; i > 0; i--)
	{
		
		Widget* wgt = new Widget(cost_each);
		
		if(isFIFO)
		{
			line->enqueue(wgt);
		}
		else
		{
			plate->push(wgt);
		}
	}

}

double InventoryManager::sellWidgets(double price, int num_to_sell)
{
	
	int sze = 0;
	double pro_fit = 0.0;
	double _cost = 0.0;
	
	Widget* wgt;
	Valtostr* v2a = new Valtostr();
	
	//String* p = new String("Size: ");
	//String* ndl = new String("\n");

	//String* _prof;
	
    for(int i = 1; i <= num_to_sell; i++)
	{
		if(isFIFO)
		{	
			if(!line->isEmpty())
			{				
				//sze = line->size();
				//p->displayString();
				
			    //_prof = new String(v2a->i_to_c(sze));
				//_prof->displayString();
				//ndl->displayString();

				wgt = line->dequeue();
				_cost = wgt->getCost();	
				
				//p = new String("Cost: ");
				//p->displayString();
	
				
				//_prof = new String(v2a->d_to_c(_cost));
				//_prof->displayString();
				
				//ndl->displayString();
				pro_fit += (price - _cost);		
			}
		}
		else
		{
			if(!plate->isEmpty())
			{
				//sze = plate->size();
				//p->displayString();

				
			    //_prof = new String(v2a->i_to_c(sze));
				//_prof->displayString();
				//ndl->displayString();
				wgt = plate->pop();
				_cost = wgt->getCost();
				
				
				//p = new String("Cost: ");
				//p->displayString();

				//_prof = new String(v2a->d_to_c(_cost));
				//_prof->displayString();
				//ndl->displayString();
				pro_fit += (price - _cost);
			}
		}
	}
	
	profit += pro_fit;
	
	//p = new String("Transaction Profit: $");
	//p->displayString();

	
	//_prof = new String(v2a->d_to_c(pro_fit));
	//_prof->displayString();
	//ndl->displayString();
	
	//delete ndl;
	//delete _prof;
	//delete p;
	return pro_fit;
}

double InventoryManager::getTotalProfit()
{
	return profit;
}


