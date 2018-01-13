// Author: Stephon Barrett 11-23-17 

#include "stdafx.h"
#include <iostream>
#include <string>
#include "storeClasses.h"
using namespace std;

Wings::Wings()
{

}

Wings::~Wings()
{
	
}

void Wings::wingsAmt()
{
	static int wingAmt;

	cout << "How many wings: (Enter in 10s)" << endl;
	cin >> wingAmt;

	switch (wingAmt)
	{
		case 10:
			wingFlavor();
			break;

		case 20:
			wingFlavor();
			break;

		case 30:
			wingFlavor();
			break;

		case 40:
			wingFlavor();
			break;

		case 50:
			wingFlavor();
			break;

		case 60:
			wingFlavor();
			break;

		case 70:
			wingFlavor();
			break;

		case 80:
			wingFlavor();
			break;

		case 90:
			wingFlavor();
			break;

		case 100:
			wingFlavor();
			break;

		default:
			cout << "ERROR: You can only enter numbers in 10s (EX: 10 or 40 or 70)" << endl;
			wingsAmt();
			break;
	}
}

void Wings::wingFlavor()
{
	string flavor;
	char confirmation;

	cout << "Enter a wing flavor: " << endl;
	cout << "We offer: Buffalo, BBQ, Garlic Parmesan, Lemon Pepper, Spicy, Jerk, or Sirarcha" << endl;

	cin >> flavor;

	do
	{
		cout << "So you chose: " << flavor << endl;
		cout << "Is this correct? y/n" << endl;
		cin >> confirmation;

		if (confirmation == 'y' || confirmation == 'Y')
		{
			cout << "Okay, Added to your cart!" << endl;
			break;
		}

		else if (confirmation == 'n' || confirmation == 'N')
		{
			wingFlavor();
		}

	} while (flavor == "buffalo" || flavor == "bbq" || flavor == "garlic" || flavor == "lemon" || flavor == "spicy" || flavor == "jerk" || flavor == "sirarcha");
}