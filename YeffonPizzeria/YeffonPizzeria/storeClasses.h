// Author: Stephon Barrett 11-23-17 

#pragma once
#ifndef storeClasses
#define storeClasses
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
			void wingAmt();
			void wingFlavor();
	};

	class Desserts
	{
		public:
			Desserts();
			~Desserts();
	};
#endif // DEBUG

