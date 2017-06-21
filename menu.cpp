#include "stdafx.h"

void zgadnijLiczbe();
void kalkulator();
void sumaTablicy();

void menuGlowne()

{
	bool zadanie = true;
	int c = 0;

	do
	{
		std::cout << "\nJaki program mam wykonac" << std::endl;
		std::cout << std::endl;
		std::cout << "[1] Gra : liczba losowa" << std::endl;
		std::cout << "[2] kalkulator " << std::endl;
		std::cout << "[3] suma tablicy" << std::endl;
		std::cout << "[4] tu jeszcze nic" << std::endl;
		std::cout << "[0] wyjscie z programu" << std::endl;

		do
		{
			std::cout << "\n>>";
			c = liczbaA();
			zadanie = (c == 1 || c == 2 || c == 3 || c == 4 || c == 0);

			switch (c)
			{
			case 1:
				zgadnijLiczbe();
				break;
			case 2:
				kalkulator();
				break;
			case 3:
				sumaTablicy();
				break;
			case 4:

				break;

			default:
				break;

			}
		} while (!zadanie);
	} while (c != 0);
}