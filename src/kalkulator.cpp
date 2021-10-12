#include <iostream>
#include <string>



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
        a = pytanie("podaj pierwsza liczbe");
        b                       = pytanie("podaj druga liczbe");
        dzialanie               = znak("jaki znak dzialania? (/,+,-,*) \n");

        if (dzialanie == "+") {
            c = dodawanie(a, b);
            std::cout << "wynik: \n" << c;
        } else if (dzialanie == "*") {
            c = mnozenie (a, b);
            std::cout << "wynik: \n" << c;
        } else if (dzialanie == "-") {
            c = odejmowanie(a, b);
            std::cout << "wynik: \n" << c;
        } else if (dzialanie == "/") {
            if (b != 0) {
                c = dzielenie(a, b);
                std::cout << "wynik: \n" << c;
            } else {
                std::cout << "błą∂ \n";
            }
        } else {
            std::cout << "nieprawidłowy znak";
        }
        return 0;
    }














