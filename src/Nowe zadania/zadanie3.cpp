#include <iostream>
#include <string>

auto main() -> int
{
	std::string imie1;
	std::string imie2;
	std::cout<<"podaj pierwsze imię:";
	std::cin >> imie1;
	std::cout<<"podaj drugie imię";
	std::cin >> imie2;
	
	if(imie1.size() > imie2.size()){
		std::cout<<"!";
	}
	else if (imie1.size() < imie2.size()){
		std::cout<<"...";
	}
	else{
		std::cout<<".";
	}
	return 0;
}