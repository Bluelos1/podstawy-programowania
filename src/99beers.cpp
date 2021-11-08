#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int 
{
int a = 99;
for(;a>0;)
{
std::cout << a << " bottles of beer on the wall, " << a <<" bottles of beer.\n";
std::cout <<" Take one down, pass it around, " << --a << " bottles of beer on the wall... \n";
}
if (a==0){
std::cout << "No more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more, 99 bottles of beer on the wall...\n";

}

return 0;

}
