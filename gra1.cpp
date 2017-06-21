#include "stdafx.h"

void zgadnijLiczbe()
{
	int WylosowanaLiczba = (rand() % 999) + 1;
	int PodanaLiczba = 0;
	int Podejscie = 0;
	bool Wygrana = true;

	std::cout << "Wygenerowalem liczbe losowa z zakresu 1 - 100\nOdgadnij ta liczbe w jak najmniejszej ilosci ruchow\n";
	std::cout << "tylko do testow" << WylosowanaLiczba << std::endl; //do testow ########################################################

	do
	{
		do
		{
			std::cout << "podaj swoja liczbe z zakresu 1-1000: \n";
			PodanaLiczba = liczbaA();
		} while (PodanaLiczba<1 || PodanaLiczba>1000);

		if (PodanaLiczba > WylosowanaLiczba)
			std::cout << "wylosowana liczna jest mniejsza niz " << PodanaLiczba << std::endl;
		if (PodanaLiczba < WylosowanaLiczba)
			std::cout << "wylosowana liczna jest wieksza niz " << PodanaLiczba << std::endl;

		Podejscie++;

	} while (PodanaLiczba != WylosowanaLiczba);

	std::cout << "Trafiles, wylosowana liczba to " << WylosowanaLiczba << std::endl;
	std::cout << "udalo ci sie wygrac w " << Podejscie << " podejsciach" << std::endl;
}