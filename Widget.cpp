/*
	Name: Ian David Gregory
	Class: CSC2110-002
	Date: 06 October 2016
*/


#include "Widget.h"

Widget::Widget(double price)
{
	cost_each = price;
}

Widget::~Widget()
{
	
}

double Widget::getCost()
{
	return cost_each;
}