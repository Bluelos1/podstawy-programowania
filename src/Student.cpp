#include <iostream>
#include <string>

struct student 
{
	std::string imie;
	std::string nazwisko;
	int index;
	int semestr;
	double srednia;
	std::string toString() const ;
};

std::string student::toString() const
{
	std::string osoba(imie + " " + nazwisko + std::to_string(index) + "semestr" + std::to_string(semestr) +  ":" +std::to_string(srednia));
	return osoba;
}

auto main () -> int
{
	std::string Ja;
	student Mateusz =
	{
		"Mateusz",
		"Placha",
		25946,
		1,
		2.0
	};
	Ja = Mateusz.toString();
	std::cout << Ja;
	return 0;


}