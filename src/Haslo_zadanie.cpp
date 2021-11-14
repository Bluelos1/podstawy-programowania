#include <iostream>
#include <string>

auto pytanie() -> std::string
{
	std::string slowo;
	std::cout << "podaj haslo: ";
	std::cin >> slowo;
	return slowo;
}


auto main(int argc, char* argv[1]) ->int
{
	auto i = 1;
std::string haslo,wpisane;
haslo = argv[i];

	do {
		wpisane = pytanie(); 
		} while (wpisane != haslo);
		std::cout << "ok";




}
