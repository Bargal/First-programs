#include "stdafx.h"

//wykluczenie dzielenia przez zero

float DzielenieO(float b, int c)
{
	for (; b == 0 && c == 4;)
	{
		std::cout << "\n\ab nie moze byc zerem (dzielenie przez zero)" << std::endl;
		std::cout << "podaj b ponownie: ";
		std::cin >> b;
	}
	return b;
}