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
	b = pytanie("podaj druga liczbe");
	if(a==b)
	{
	std::cout << a << "==" << b << "\n";
	}
	else if (a>b)
	{
	std::cout << a << ">" << b << "\n";
	}
	else
	{
	std::cout << a << "<" << b << "\n";
	}
} 

