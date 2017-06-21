#include "stdafx.h"

float liczbaA()  //wczytanie liczby z klawiatury + sprawdzenie b³êdu.
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