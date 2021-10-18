#include <iostream>
#include <string>

auto pytanie(std::string tresc) -> int
{
    int a;
    std::cout << tresc << ": ";
    std::cin >> a;
    return a;
}

auto licz_trojkat(int a, int h) -> double
{
    double c;
    c = (a * h) / 2;
    return c;
}

auto licz_kwadrat(int a) -> double
{
    double c;
    c = a * a;
    return c;
}

auto licz_trapez(int a, int b,int h) -> double
{
    double c;
    c = (a+b)*h/2;
    return c;
}

auto main() -> int
{
    int a,b,h,figura;
    double wynik;
    std::string wybor_str;
    
    std::cout << "ktora figure chcesz obliczyc?(wpisz cyfre)\n 1.Trojkat\n 2.Kwadrat\n 3.Trapez\n: ";
    std::cin >> wybor_str;
    figura = std::stoi(wybor_str);
    switch(figura)
    {
        case 1:
        a = pytanie("Podaj Bok ");
        h = pytanie("Podaj Wysokosc ");
        wynik = licz_trojkat(a,h);
        std::cout << "Pole wynosi: " << wynik << "\n";
        break;

        case 2:
        a = pytanie("Podaj Bok kwadratu");
        wynik = licz_kwadrat(a);
        std::cout << "Pole wynosi: " << wynik << "\n";
        break;

        case 3:
        a = pytanie("Podaj podstawe nr.1 ");
        b = pytanie("Podaj podstawe nr.2 ");
        h = pytanie("Podaj wysokosc ");
        wynik = licz_trapez(a,b,h);
        std::cout << "Pole wynosi: " << wynik << "\n";
        break;
    }
    return 0;
}