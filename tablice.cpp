#include "stdafx.h"

void sumaTablicy()

{
	int tablica[999];
	int krok = 0;
	int krok1 = 0;
	int krok2 = 0;
	int wynik = 0;
	
	do
	{
		int liczba = 4+(rand() % 7);
		tablica[krok] = liczba;
		krok++;
	} while (krok != 998);

	do
	{
		std::cout << "pozycja " << krok1 << "wartosc " << tablica[krok1] << std::endl;
		krok1++;
	} while (krok1 != 998);

	do
	{
		wynik += tablica[krok2];
		krok2++;

	} while (krok2 != 998);

	std::cout << "wynik dodawania liczb tablicy = " << wynik << std::endl;
}
