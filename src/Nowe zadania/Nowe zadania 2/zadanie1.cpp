#include <iostream>
#include <vector>
#include <string>

auto srednia(std::vector<int> liczby) -> double
{
	double temp, wynik;
	for(int i = 0;i<liczby.size();i++)
	{
		temp += liczby[i];
	}
	wynik = temp /liczby.size();
	return wynik;
}

auto main() -> int
{
	double avarage;
	std::vector<int> number = {1,2,3,4};
	avarage = srednia(number);
	std::cout<<avarage;
	
}
