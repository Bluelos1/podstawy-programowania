#include <iostream>
#include <string>

auto ntyznak(std::string wyraz, int liczba) -> std::string
{
    std::string reszta;
    for (int i = 1; i <= wyraz.size(); ++i)
	if (i % liczba == 0)
        reszta += wyraz[i-1];
    return reszta;
}

int main()
{
    std::cout << ntyznak("pianino", 3);
    return 0;
}
