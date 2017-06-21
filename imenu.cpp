#include "stdafx.h"

// wybór z menu kalkulatora

int IMenu()
{
	bool zadanie = true;
	int c = 0;
	do
	{
		std::cout << "\n>>";
		c = liczbaA();
		zadanie = (c == 1 || c == 2 || c == 3 || c == 4);

	} while (!zadanie);
	return c;
}