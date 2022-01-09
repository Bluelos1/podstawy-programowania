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
	double temp, wynik;
	for(int i = 0;i<oceny.size();i++)
	{
		temp += oceny[i];
	}
	wynik = temp /oceny.size();
	return wynik;
}

int main()
{
	std::vector<int> alloceny = {2,3,4,5,6};
	student Mateusz{"Mateusz","Placha",alloceny};
	std::cout<<Mateusz.srednia();
}