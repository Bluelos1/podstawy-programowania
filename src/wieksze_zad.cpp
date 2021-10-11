#include <iostream>
#include <string>



auto pytanie(std::string prompt) -> int
{
int n;
std::cout << prompt << "\n";
std::cin >> n;
return n;
}



auto co_wieksze(int a, int b) -> int
{
if (a>b)
   {
	return a;
   }
else
   {
	return b;
   }
}


auto main() -> int
{
	int a,b,c;
	a = pytanie("podaj pierwsza liczbe");
	b = pytanie("podaj druga liczbe");
	c = co_wieksze(a,b);
	std::cout <<  "wynik:" << c;
}
