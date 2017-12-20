// Author: Stephon Barrett 11-23-17 

#include "stdafx.h"
#include <iostream>
#include <string>
#include "storeClasses.h"
using namespace std;

Pizza::Pizza()
{

}

Pizza::~Pizza()
{

}

void Pizza::pizzaAmt()
{
	int pizzaAmt, i = 1;
	Pizza *pizzas[10];

	cout << "How many pizzas do you want? (Max: 10)" << endl;
	cin >> pizzaAmt;

	if (pizzaAmt >= 1)
	{
		for (i; i <= pizzaAmt; i++)
		{
			cout << "What is the size of pizza: " << i << endl;
		}
	}
}

