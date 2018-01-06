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

int Wings::wingAmt()
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
			cout << "ERROR: You can only enter numbers in 10s (EX: 10 or 20 or 70)" << endl;
			break;
	}

	return wingAmt;
}

string Wings::wingFlavor()
{
	string flavor;

	cout << "Enter a wing flavor: " << endl;
	cout << "We offer: Buffalo, BBQ, Garlic Parmesan, Lemon Pepper, Spicy, Jerk, or Sirarcha" << endl;

	cin >> flavor;

	cout << "So you chose: " << flavor << endl;
	cout << "Is this correct? y/n" << endl;

	return flavor;
}