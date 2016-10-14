/*
	Name: Ian David Gregory
	Class: CSC2110-002
	Date: 06 October 2016
*/

#if !defined MAX_D
#define MAX_D 1.7976931348623158e+308
#endif

#if !defined MAX_I
#define MAX_I 2147483646
#endif

#include "InventoryManager.h"

#include "CSC2110/Text.h"
using CSC2110::String;
#include "CSC2110/Keyboard.h"
using CSC2110::Keyboard;
#include "CSC2110/Keywait.h"
using CSC2110::Keywait;
#include "Valtostr.h"
using CSC2110::Valtostr;



int inventoryChoice()
{
   
   Keyboard* kb = Keyboard::getKeyboard();
   int inv_choice = kb->getValidatedInt("\r\nAre you using (1) LIFO or (2) FIFO inventory management? ", 1, 2);
   return inv_choice;

}

//DO THIS
//buy Widgets (check invalid input and reprompt if necessary)
void buyWidgets(InventoryManager* im)
{

	Keyboard* kb = Keyboard::getKeyboard();
	int num_to_buy = kb->getValidatedInt("\n** How many widget(s) would you like to buy? ", 1, MAX_I);
	double cost_each = kb->getValidatedDouble("\n** What is the cost for each widget? $", 0, MAX_D);
	im->buyWidgets(cost_each, num_to_buy);
}

//DO THIS
//sell Widgets and return the profit (check invalid input and reprompt if necessary)
double sellWidgets(InventoryManager* im)
{
	Keyboard* kb = Keyboard::getKeyboard();
	int num_to_sell = kb->getValidatedInt("\n** How many widget(s) would you like to sell? ", 1, MAX_I);
	double price = kb->getValidatedDouble("\n** What is the selling price for each widget? $", 0, MAX_D);
	double profit = im->sellWidgets(price, num_to_sell);
	return profit;
}

bool mainMenu(InventoryManager* im)
{
   Keyboard* kb = Keyboard::getKeyboard();
   int menu_choice = kb->getValidatedInt("\r\n************\r\n1. Buy Widgets \r\n2. Sell Widgets\r\n3. Quit \r\n************\r\n\r\nWhat would you like to do? ", 1, 3);
   
   if (menu_choice == 1)
   {
      buyWidgets(im);
      return 1;
   }
   else if(menu_choice == 2)
   {
      sellWidgets(im);
      return 1;
   }
   else 
   {
      return 0;
   }
}


int main()
{
   
   int inv_choice = inventoryChoice();
   InventoryManager* im = new InventoryManager(inv_choice);
   Valtostr* d2a = new Valtostr();
   
   bool ask = 1;
   while (ask)
   {
      ask = mainMenu(im);
   }

   double running_total = im->getTotalProfit();
   
   String* s2 = new String("\nYour total Profit for all transactions is $");
   s2->displayString();
   String* s3 = new String(d2a->d_to_c(running_total));
   s3->displayString();
   
   //cout << running_total << endl;
   String* end_l = new String("\n");
   end_l->displayString();
   
   Keywait* wk = new Keywait();
   wk->waitForKey();
   
   delete s2;
   delete s3;
   delete end_l;
   delete im;
   delete d2a;
   return 0;
}
