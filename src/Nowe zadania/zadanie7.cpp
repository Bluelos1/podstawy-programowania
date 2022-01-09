#include <iostream>
#include <string>

auto count_chars(std::string, char) -> int;


auto main() -> int
{
    std::cout << count_chars("rabarbar",'b');

    return 0;
}


auto count_chars(std::string wyraz, char znak) -> int
{
    int ilosc= 0;
    for(int i=0; i<wyraz.size() ; i++)
    {
        if(wyraz[i]==znak)
            ilosc++;
    }
    return ilosc;
}