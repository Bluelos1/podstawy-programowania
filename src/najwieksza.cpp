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
	int a,b,c;
	a = pytanie("podaj pierwsza liczbe");
	b = pytanie("podaj druga liczbe");
	c = pytanie("podaj trzecia liczbe");
	if(a>b && a>c)
	{
		std::cout<< a << "\n";
 
	}
	else if (b>a && b>c)
	{
		std::cout << b << "\n";
	}
	else
	{
	std::cout << c << "\n";
	}
} 
