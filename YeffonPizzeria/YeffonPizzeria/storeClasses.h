// Author: Stephon Barrett 11-23-17 

#pragma once
#ifndef storeClasses
	#include <string>

	class Pizza
	{
		public:

			Pizza();
			~Pizza();
			int pizzaAmt();
			char pizzaSize();
			void pizzaToppings();
			string toppingCase();
	};

	class Wings
	{
		public:
			Wings();
			~Wings();
			int wingAmt();
			string wingFlavor();
	};

	class Desserts
	{
		public:
			Desserts();
			~Desserts();
	};

#define storeClasses
#endif // DEBUG

