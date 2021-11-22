#include <string>

struct student 
{
	std::string imie;
	std::string nazwisko;
	int index;
	int semestr;
	double srednia;
	auto toString() const -> std::string ;
};
std::string student::toString() const{

std::string Opis(imie+" "+nazwisko+" indeks:"+std::to_string(index)+" semestr: "+std::to_string(semestr)+"srednia: "+std::to_string(srednia));
return Opis;
}