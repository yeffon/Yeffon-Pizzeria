// Author: Stephon Barrett 11-23-17 

#pragma once
#ifndef storeClasses
	#include <string>

	class Pizza
	{
		public:
			Pizza();
			~Pizza();
			void pizzaAmt();
			void pizzaSize();
			void pizzaToppings();
			void toppingCase();
	};

	class Wings
	{
		public:
			Wings();
			~Wings();
			void wingsAmt();
			void wingFlavor();
	};

	class Desserts
	{
		public:
			Desserts();
			~Desserts();
	};

#define storeClasses
#endif // DEBUG

