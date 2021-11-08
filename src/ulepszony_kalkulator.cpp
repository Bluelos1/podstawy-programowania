#include <iostream>
#include <string>
#include <cmath>

auto pytanie(std::string prompt) -> int
{
int n;
std::cout << prompt << "\n";
std::cin >> n;
return n;
}



auto dodawanie ( int a, int b) -> int
{
    int c;
    c = a+b;
    return c;
}

auto mnozenie ( int a, int b) -> int
{
    int c;
    c = a * b;
    return c;
}

auto dzielenie(int a, int b)->int
{
    int c;
    c = a / b;

    return c;
}

auto odejmowanie(int a, int b)->int
{
    int c;
    c = a - b;
    return c;
}

auto dzielcal(int a, int b) -> int
{
	float c;
	c = a / b;
	return c;
}

auto modulo(int a, int b) -> int
{
        int c;
        c = a % b;
        return c;
}

auto potegowanie (int a) -> int
{
        int c;
        c = pow(a,2);
        return c;
}

auto pierwiastek (int a) -> int
{
        int c;
        c = sqrt(a);
        return c;
}

auto znak(std::string prompt)->std::string
{
    std::string a;
    std::cout << prompt << ":\n";
    std::cin >> a;
    return a;
}




auto main()->int
{
    int a, b, c ;
    std::string dzialanie;
    dzialanie = znak("jaki znak dzialania? (/,+,-,*,/_/,%,*2,sqrt) \n");

    if (dzialanie == "+") {
	a = pytanie("podaj pierwsza liczbe");
    b = pytanie("podaj druga liczbe");
        c = dodawanie(a, b);
        std::cout << "wynik: \n" << c;
    } else if (dzialanie == "*") {
	a = pytanie("podaj pierwsza liczbe");
    b = pytanie("podaj druga liczbe");
        c = mnozenie (a, b);
        std::cout << "wynik: \n" << c;
    } else if (dzialanie == "-") {
	a = pytanie("podaj pierwsza liczbe");
    	b = pytanie("podaj druga liczbe");
        c = odejmowanie(a, b);
        std::cout << "wynik: \n" << c;
    } else if (dzialanie == "/_/") {
	a = pytanie("podaj pierwsza liczbe");
    	b = pytanie("podaj druga liczbe");
        c = dzielcal(a, b);
        std::cout << "wynik: \n" << c;
    } else if (dzialanie == "%") {
	a = pytanie("podaj pierwsza liczbe");
    	b = pytanie("podaj druga liczbe");
        c = modulo(a, b);
        std::cout << "wynik: \n" << c;
    } else if (dzialanie == "*2") {
	a = pytanie("podaj pierwsza liczbe");
        c = potegowanie(a);
        std::cout << "wynik: \n" << c;
    } else if (dzialanie == "sqrt") {
	a = pytanie("podaj pierwsza liczbe");
        c = pierwiastek(a);
        std::cout << "wynik: \n" << c;
    } else if (dzialanie == "/") {
	a = pytanie("podaj pierwsza liczbe");
   	 b = pytanie("podaj druga liczbe");
	
        if (b != 0) {
            c = dzielenie(a, b);
            std::cout << "wynik: \n" << c;
        } else {
            std::cout << "blad \n";
        }
    } else {
        std::cout << "nieprawidłowy znak";
    }
    return 0;
}

