// ConsoleApplication3.cpp: Okreœla punkt wejœcia dla aplikacji konsoli.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

// deklaracje funkcji

float liczbaA();
void zgadnijLiczbe();
void kalkulator();
void sumaTablicy();
void menuGlowne();



// program g³ówny ############################################################

int main()
{
	srand(time(NULL));

	menuGlowne();

	system("PAUSE");
	return 0;
}

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

// menu  ######################################################################

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


// tablice - dodawanie random  ###################################################

void sumaTablicy()

{

	int tablica[999];
	int krok = 0;
	int krok1 = 0;
	int krok2 = 0;
	int wynik = 0;


	do
	{
		int liczba = (rand() % 7) + 4;
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



// zgadnij liczbe ###############################################################


void zgadnijLiczbe()
{
	int WylosowanaLiczba = (rand() % 999) + 1;
	int PodanaLiczba = 0;
	int Podejscie = 0;
	bool Wygrana = true;


	std::cout << "Wygenerowalem liczbe losowa z zakresu 1 - 100\nOdgadnij ta liczbe w jak najmniejszej ilosci ruchow\n";
	std::cout << WylosowanaLiczba << std::endl; //do testow


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


//kalkulator########################################################################

float DzielenieO(float b, int c)//wykluczenie dzielenia przez zero
{
	for (; b == 0 && c == 4;)
	{
		std::cout << "\n\ab nie moze byc zerem (dzielenie przez zero)" << std::endl;
		std::cout << "podaj b ponownie: ";
		std::cin >> b;
	}
	return b;

}

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

