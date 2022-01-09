#include <iostream>
#include <string>
#include <vector>

struct grupa
{
    std::string nazwa;
    std::vector<std::string> studenci;
};

struct student
{
	std::string imie;
	std::string nazwisko;
	std::vector<int> oceny;
	double srednia();
};

auto student::srednia() -> double
 {
	double temp, wynik;
	for(int i = 0;i<oceny.size();i++)
	{
		temp += oceny[i];
	}
	wynik = temp /oceny.size();
	return wynik;
}

double grupa::mediana()
{
	std::vector<double> srednie;
	for(student& student : studenci)
	{
		srednie.push_back(student.srednia());
	}
	if(srednie.size() == 0)
	{
		return 0;
	}
	else
	{
		sort(srednie.begin(), srednie.end());
		if (srednie.size() % 2==0)
		{
			return (srednie[srednie.size() / 2 - 1] + srednie[srednie.size()/2]) /2

		}
		else
		{
			return srednie[srednie.size() / 2];
		}
	}
}

std::string najlepsza_grupa(std::vector<grupa>& in)
{
	grupa* dobra = &in[0];
	for(grupa* tak : in)
	{
		if(tak.mediana()>= dobra ->mediana())
		{
			dobra = &tak;
		}
	}
	return dobra -> nazwa;
}

auto main() -> int 
{
	student Krzysztof {"Krzysztof", "Domarecki",{,3,3,4,5}};
	student Jan {"jan","Gontarzewski",{2,2,3,4}};
	student Karol {"Karol","Mazurowski",{4,2,5,2}};
	student Borys {"Borys","Bera",{2,2,2,3}};
	student Hubert {"Hubert", "Labuda", {2,2,2,2}};
	student Katarzyna {"Katarzyna", "Arabasz",{3,3,4,5}};
	std::vector<student>z {Krzysztof, Karol, Hubert},x {Jan, Borys ,Katarzyna,};
	grupa a{"2a", z}, b{"3b",x};
	std::vector<grupa> d {a,b};
	std::cout<<najlepsza_grupa(d);
	return 0;
}