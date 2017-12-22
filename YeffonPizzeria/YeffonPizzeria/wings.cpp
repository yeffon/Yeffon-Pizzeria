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

void Wings::wingAmt()
{
	int wingAmt;

	cout << "How many wings: (Enter in 10s)" << endl;
	cin >> wingAmt;

	do
	{
		if (wingAmt == 10 || wingAmt == 20 || wingAmt == 30 || wingAmt == 40 || wingAmt == 50 || wingAmt == 100)
		{

		}

		
	} while (wingAmt >= 10 || wingAmt <= 100);
}