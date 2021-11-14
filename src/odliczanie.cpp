#include <iostream>
#include <string>


auto main (int argc, char* argv[]) -> int 
{  
    int a;
	std::string b= argv[1];
	a = stoi(b);
if(argc == 2)
{
for (int i = a ; i>=0 ; i--)
{
	std::cout << i << "...\n";
}
}
else 
{
	std::cout << " zla ilosc argumentow";

}
return 0;
}







