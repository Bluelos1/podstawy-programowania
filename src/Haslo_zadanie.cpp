#include <iostream>
#include <string>

auto main (int argc,char* argv[]) -> int{

auto const haslo = std::string{argv[1]};
auto haslobl = std::string{};

if (argc==2){
	do{
		std::cout<<"password:";
		std::cin>>haslobl;
	}
		while(haslo != haslobl);
		std::cout << "ok!" <<"\n";
}else{
	std::cout<<"podaj jeden argument\n";
}
return 0;
	}
	





