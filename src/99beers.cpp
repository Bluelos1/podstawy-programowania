#include <iostream>
#include <string>

auto main(int argc, char *argv[]) -> int 
{
int a;
std::string b= argv[1];
a = stoi(b);
if(argc == 2)
{
for(int i = a;i>=0;--i){
if (i == 0){
	std::cout << "No more bottles of beer on the wall, no more bottles of beer. Go to the store and buy some more, 99 bottles of beer on the wall...\n";
}else
{
std::cout << i << " bottles of beer on the wall, " << i <<" bottles of beer.\n";
std::cout <<" Take one down, pass it around, " << i << " bottles of beer on the wall... \n";
}
}



}

return 0;

}

