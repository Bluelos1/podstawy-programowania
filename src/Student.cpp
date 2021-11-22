
#include<iostream>
#include<string>
#include "Student.h"


auto main () -> int
{
	std::string Ja;
	student Mateusz =
	{
		"Mateusz",
		"Placha",
		25946,
		1,
		2.5
	};
	Ja = Mateusz.toString();
	std::cout << Ja;
	return 0;


}