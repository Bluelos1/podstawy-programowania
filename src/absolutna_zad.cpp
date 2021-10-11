#include <iostream>
#include <string>



auto pytanie(std::string prompt) -> int
{
int n;
std::cout << prompt << "\n";
std::cin >> n;
return n;
}



auto main() -> int
{
	int a,b;
	a = pytanie("podaj pierwsza liczbe");
	b = abs(a);
	std::cout <<  "wynik:" << b;
}
