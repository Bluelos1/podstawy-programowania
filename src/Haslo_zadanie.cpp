#include <iostream>
#include <string>

auto pytanie() -> std::string
{
	std::string slowo;
	std::cout << "podaj haslo: ";
	std::cin >> slowo;
	return slowo;
}


auto main() ->int
{
std::string haslo,wpisane;
haslo = "student";

	do {
		wpisane = pytanie(); 
		} while (wpisane != haslo);
		std::cout << "ok";




}
