#include "stdafx.h"

//wczytanie liczby z klawiatury + sprawdzenie b³êdu.

float liczbaA()  
{
	float a;
	bool test;
	do
	{
		std::cin >> a;
		test = std::cin.fail();
		std::cin.clear();
		std::cin.ignore(std::numeric_limits < std::streamsize >::max(), '\n');

	} while (test);

	return a;
}