#include <iostream>
#include <string>

auto is_divisible(int a, int b) -> bool
{
	if(a%b==0)
		return true;
	else
		return false;
}

auto is_even(int a, int b) ->bool
{
	if(is_divisible(a, b)==1) {
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	int a,b ;
	std::cout<<"podaj liczbe:"<<"\n";
	std::cin>>a;
	std::cout<<"podaj dzielnik:"<<"\n";
	std::cin>>b;
	std::cout<< is_even(a,b)<<"\n";
	
}