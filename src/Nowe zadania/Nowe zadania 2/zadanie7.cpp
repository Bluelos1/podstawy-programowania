#include <iostream>
#include <string>
#include <vector>

struct grupa
{
    std::string nazwa;
    std::vector<std::string> studenci;
};

void dodaj_do_grupy(std::string name,grupa* wszyscy)
{
	wszyscy->studenci.push_back(name);
}

auto main() -> int
{
	std::vector<std::string> student = {"Kacper","Karol","Olaf","Jan","Katarzyna"};
	grupa wszyscy {"losowa grupa:", student};
	std::cout << wszyscy.nazwa << "\n";
	
	for ( int i = 0; i < wszyscy.studenci.size();i++)
	{
		std::cout << wszyscy.studenci[i]<<", ";
	}
	dodaj_do_grupy("Natalia",&wszyscy);
	std::cout << "\n";
	for(int k = 0; k < wszyscy.studenci.size(); k++)
	{
		std::cout << wszyscy.studenci[k]<< ", ";
	}
	return 0;
}
