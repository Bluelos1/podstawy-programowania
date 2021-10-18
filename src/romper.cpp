#include <iostream>
#include <string>

auto main() -> int 
{
int a = 99;
for(;a>0;){
std::cout << a << "bottles of beer on the wall," << a <<"bottles of beer.\n";
std::cout <<"Take one down, pass it around," << --a << "bottles of beer on the wall...\n" 
}
return 0;

}
