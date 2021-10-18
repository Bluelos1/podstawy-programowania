#include <iostream>
#include <string>

auto pytanie() -> int{
int a;
std::cout << "podaj liczbe: ";
std::cin >> a;
return a;

}











auto main () -> int{
int a,i; 
a = pytanie();

for (i=1; i <= a; i++)
{
	if (i%15 == 0){
std::cout << i << "fizzbuzz \n";

}
	else if ((i%3) == 0){
std::cout << i << "fizz\n";
}
	else if ((i%5) == 0){
std::cout << i << "buzz\n";
}
 
}
return 0;





	}
