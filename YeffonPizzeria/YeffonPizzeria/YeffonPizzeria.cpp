// Author: Stephon Barrett 11-23-17 

#include "stdafx.h"
#include <iostream>
#include "storeClasses.h"
using namespace std;

void main()
{
	string wantFood;

	Start:
	cout << "Welcome to Yeffon's Pizzeria!" << endl;
	cout << "What would you like: Pizza, Wings, Desserts?" << endl;
	cin >> wantFood;

	if (wantFood == "Pizza" || wantFood == "pizza")
	{
		Pizza aPizza;

		//aPizza.pizzaAmt();
		aPizza.pizzaSize();
		aPizza.pizzaToppings();
	}

	else if (wantFood == "wings" || wantFood == "Wings")
	{
		Wings someWings;

		cout << "Comming soon" << endl;
		goto Start;
	}

	else if (wantFood == "dessert" || wantFood == "desserts")
	{
		Desserts someDesserts;

		cout << "Comming Soon" << endl;
		goto Start;
	}

	else
	{
		cout << "ERROR: enter 'pizza', 'wings', or 'desserts'!" << endl;
		goto Start;
	}
}