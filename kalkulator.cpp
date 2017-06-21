#include "stdafx.h"
#include "dzielenie.h"
#include "imenu.h"

float DzielenieO(float b, int c);//wykluczenie dzielenia przez zero
int IMenu(); // wybór z menu



void kalkulator()
{

	float a, b;
	a = b = 0;
	int c = 5;
	char wyjscie;

	do
	{

		std::cout << "\n\nprogram wykonuje podstawowe dzialania matematyczne na liczbach a i b \n\n";

		//wywo³ania funkcji
		std::cout << "\npodaj A >> ";
		a = liczbaA();
		std::cout << "\nPodaj B >> ",
			b = liczbaA();

		std::cout << "\njakie dzialanie wykonac?\n" << std::endl;
		std::cout << "[1] dla dodawania" << std::endl;
		std::cout << "[2] dla odejmowania" << std::endl;
		std::cout << "[3] dla mnozenia" << std::endl;
		std::cout << "[4] dla dzielenia" << std::endl;

		c = IMenu();
		b = DzielenieO(b, c);

		//wykonanie i wyœwietleie dzia³ania

		switch (c)
		{
		case 1:
			std::cout << a << " plus " << b << " rowna sie " << a + b << std::endl;
			break;
		case 2:
			std::cout << a << " minus " << b << " rowna sie " << a - b << std::endl;
			break;
		case 3:
			std::cout << a << " razy " << b << " rowna sie " << a * b << std::endl;
			break;
		case 4:
			std::cout << a << " dzielone przez " << b << " rowna sie " << a / b << std::endl;
			break;
		}

		std::cout << "\n\nswietnie, teraz jeszcze powiem ci ze:" << std::endl;

		if (a == b)
			std::cout << a << " jest rowne " << b << std::endl;
		else
			if (a > b)
				std::cout << a << " jest wieksze od " << b;
			else std::cout << a << " jest mniejsze od " << b << std::endl;

			// alternaywne zakoñczenie

			std::cout << "\n\nCzy chcesz kontynuowac prace w kalkulatorze t/n ";
			std::cin >> wyjscie;

	} while (wyjscie != 'n');
	std::cout << "\ndziekujemy za skorzystanie z kalkulatora" << std::endl << std::endl;
}
