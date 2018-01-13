// Author: Stephon Barrett 11-23-17 

#include "stdafx.h"
#include <iostream>
#include <string>
#include "storeClasses.h"
using namespace std;

static int toppingAmt, i = 0;
string toppings[5];
char confirmation;

Pizza::Pizza()
{	
}

Pizza::~Pizza()
{
}

void Pizza::pizzaAmt()
{
	static int pAmt, i = 1;
	Pizza pizzas[10];

	cout << "How many pizzas do you want? (Max: 10)" << endl;
	cin >> pAmt;

	if (pAmt >= 1 && pAmt <= 10)
	{
		for (i; i <= pAmt; i++)
		{
			cout << "What is the size of pizza: " << i << endl;
			pizzas[i].pizzaSize();
		}
	}

	else
	{
		cin.clear();
		cout << "ERROR: You can only between 1 and 10 pizzas." << endl;
		return pizzaAmt();
	}
}

void Pizza::pizzaSize()
{
	char pSize;

	cout << "Enter a pizza size: (s for small, m for medium, l for large)" << endl;
	cin >> pSize;

	if (pSize == 's')
	{
		cout << "You ordered a small" << endl;
		pizzaToppings();
	}

	else if (pSize == 'm')
	{
		cout << "You ordered a medium" << endl;
		pizzaToppings();
	}

	else if (pSize == 'l')
	{
		cout << "You ordered a large" << endl;
		pizzaToppings();
	}

	if ((pSize != 's') || (pSize != 'm') || (pSize != 'l'))
	{
		cout << "ERROR: Enter s for small, m for medium, l for large." << endl;
		cin.clear();
		cin.sync();
		pizzaSize();
	}
}

void Pizza::pizzaToppings()
{
	toppingEntry:
	cout << "How many toppings do you want (Max: 5)" << endl;
	cin >> toppingAmt;

	switch (toppingAmt)
	{
		case 0:
			confirmEntry:
			cout << "You choice was no toppings? y/n?" << endl;
			cin >> confirmation;

			if (confirmation == 'y' || confirmation == 'Y')
			{
				cout << "Okay, your order has been placed!" << endl;
			}

			else if (confirmation == 'n' || confirmation == 'N')
			{
				goto toppingEntry;
			}

			else
			{
				cout << "ERROR: Enter 'Y' or 'N' for confirmation" << endl;
				cin.clear();
				cin.sync();
				goto confirmEntry;
			}

		case 1:
			toppingCase();
			break;

		case 2:
			toppingCase();
			break;

		case 3:
			toppingCase();
			break;

		case 4:
			toppingCase();
			break;

		case 5:
			toppingCase();
			break;

		default:
			cout << "ERROR: You are allowed 0-5 topping. Please enter a number from 0-5" << endl;
			cin.clear();
			cin.sync();
			goto toppingEntry;
			break;
	}
}

void Pizza::toppingCase()
{
	cout << "What toppings do you want on your pizza?" << endl;
	cout << "We offer: Pepperoni, Sausage, Buffalo, BBQ, Pineapple, Mushroom, Vodka, Anchioves" << endl;

	//Asks user their topping(s) and stores it in an array
	for (i; i < toppingAmt; i++)
	{
		cin >> toppings[i];
	}

	cout << "So your toppings are: ";

	//Prints out the topping(s) for conformation
	for (int j = 0; j < i; j++)
	{
		if (j < i - 1)
		{
			cout << toppings[j] << ", ";
		}

		else
		{
			cout << toppings[j] << endl;
			cout << "Is this correct? y/n?" << endl;
		}
	}

	confirmEntry1:
	cin >> confirmation;

	if (confirmation == 'y' || confirmation == 'Y')
	{
		cout << "Okay, Added to your cart!" << endl;
	}

	else if (confirmation == 'n' || confirmation == 'N')
	{
		pizzaToppings();
	}

	else 
	{
		cout << "ERROR: Enter 'Y' or 'N' for confirmation" << endl;
		cin.clear();
		cin.sync();
		goto confirmEntry1;
	}
}