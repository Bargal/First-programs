#include "stdafx.h"

int IMenu() // wybór z menu
{
	bool zadanie = true;
	int c = 0;
	do
	{
		std::cout << "\n>>";
		c = liczbaA();
		zadanie = (c == 1 || c == 2 || c == 3 || c == 4);


		//if (c == 1 || c == 2 || c == 3 || c == 4)
		//zadanie = false;

	} while (!zadanie);
	return c;
}