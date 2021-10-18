#include <iostream>
#include <string>



auto pytanie() -> int
{
	int a;
	std::cout <<"guess: ";
	std::cin >> a;
	return a;
}


auto main() -> int
{
int los,a;
srand (time(0));
los = rand() % 100 + 1;
	do {
std::cout << "zgadnij liczbe od 1 do 100:\n";
a=pytanie();
if (los<a){
std::cout << "liczba jest za duża\n";
}
else if (los>a) {
std::cout << "liczba jest za mała\n";
}

	} while (los != a);
std::cout << "siadlo";
return 0; 
}
