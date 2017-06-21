#include "stdafx.h"

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