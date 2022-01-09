#include <string>
#include <iostream>
#include <vector>

struct student
{
	std::string imie;
	std::string nazwisko;
	std::vector<int> oceny;
	double srednia();
};

double student::srednia()
{
	int suma = 0;
	double wynik;
	for(int i =0;i < oceny.size(); i++)
	{
		suma += oceny[i];
	}
	wynik = suma / (double)oceny.size();
	return wynik;
}

student* najlepszy_student(std::vector<student>* in)
{
	student* out = &in->at(0);
	for (int i = 0;i < in ->size(); i++)
	{
		if(in -> at(i).srednia() > out -> srednia())
		{
			out= &in -> at(i);
		}
		
	}
	return out;
}

auto main () -> int
{
	student* najlepszy;
	student Mateusz{"Mateusz","Placha",{3,4,2,2}};
	student Kacper {"Kacper","Kedzier",{4,4,5,4}};
	std::vector<student> vec={Mateusz,Kacper};

	najlepszy = najlepszy_student(&vec);
	std::cout << najlepszy ->imie<<"\n" << najlepszy -> srednia();

	return 0;
}