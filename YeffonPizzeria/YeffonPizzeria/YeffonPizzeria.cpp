// Author: Stephon Barrett 11-23-17 

#include "stdafx.h"
#include <iostream>
#include "storeClasses.h"
using namespace std;

void main()
{
	string wantFood;
	Pizza aPizza;

	Start:
	cout << "Welcome to Yeffon's Pizzeria!" << endl;
	cout << "What would you like: Pizza, Wings, Desserts?" << endl;
	cin >> wantFood;

	if (wantFood == "Pizza" || wantFood == "pizza")
	{
		//aPizza.pizzaAmt();
		aPizza.pizzaSize();
		aPizza.pizzaToppings();
	}

	else if (wantFood == "wings" || wantFood == "Wings")
	{
		cout << "Comming soon" << endl;
		goto Start;
	}

	else if (wantFood == "dessert" || wantFood == "desserts")
	{
		cout << "Comming Soon" << endl;
		goto Start;
	}
}

