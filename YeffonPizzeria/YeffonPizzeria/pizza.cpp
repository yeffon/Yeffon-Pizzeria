// Author: Stephon Barrett 11-23-17 

#include "stdafx.h"
#include <iostream>
#include <string>
#include "storeClasses.h"
using namespace std;

static int toppingAmt, 
i = 0;
string confirmation, toppings[5];

Pizza::Pizza()
{

}

Pizza::~Pizza()
{

}

void Pizza::pizzaAmt()
{
	static int pizzaAmt, i = 1;
	Pizza pizzas[10];

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

void Pizza::pizzaSize()
{
	//enum Size { s, m, l };

	string pSize;
	//Size size;

	cout << "Enter a pizza size: (s for small, m for medium, l for large)" << endl;
	cin >> pSize;

	/*switch (pSize)
	{
		case 1:
			cout << "You ordered a small" << endl;
			break;

		case 2:
			cout << "You ordered a medium" << endl;
			break;

		case 3:
			cout << "You ordered a large" << endl;
			break;

		default:
			cout << "ERROR: Enter 1 for small, 2 for medium, 3 for large." << endl;
			pizzaSize();
			break;
	}*/

	do
	{
		if (pSize == "s")
		{
			cout << "You ordered a small" << endl;
		}

		else if (pSize == "m")
		{
			cout << "You ordered a medium" << endl;
		}

		else if (pSize == "l")
		{
			cout << "You ordered a large" << endl;
		}
	} while ((pSize == "s") || (pSize == "m") || (pSize == "l"));

	if ((pSize != "s") || (pSize != "m") || (pSize != "l"))
	{
		cout << "ERROR: Enter s for small, m for medium, l for large." << endl;
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

			if (confirmation == "y" || confirmation == "Y")
			{
				cout << "Okay, your order has been placed!" << endl;
			}

			else if (confirmation == "n" || confirmation == "N")
			{
				goto toppingEntry;
			}

			else
			{
				cout << "ERROR: Enter 'Y' or 'N' for confirmation" << endl;
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

	do
	{
		confirmEntry1:
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

		cin >> confirmation;

		if (confirmation == "y" || confirmation == "Y")
		{
			cout << "Okay, Added to your cart!" << endl;
		}

		else if (confirmation == "n" || confirmation == "N")
		{
			pizzaToppings();
		}

		else
		{
			cout << "ERROR: Enter 'Y' or 'N' for confirmation" << endl;
			goto confirmEntry1;
		}

	} while ((toppings[i] == "pepperoni") || (toppings[i] == "sausage") || (toppings[i] == "bbq") || (toppings[i] == "pineapple") || (toppings[i] == "vodka") || (toppings[i] == "mushroom"));
}

