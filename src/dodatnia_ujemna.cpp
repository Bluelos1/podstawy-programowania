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
	int a;
	a = pytanie("podaj liczbe");
	if(a==0)
	{
	std::cout << 0 << "\n";
	}
	else if (a>0)
	{
	std::cout << 1 << "\n";
	}
	else
	{
	std::cout << -1 << "\n";
	}
} 
