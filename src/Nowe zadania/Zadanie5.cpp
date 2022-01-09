#include <iostream>

auto is_even(int a) ->bool
{
	if(a%2==0) {
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	int a ;
	std::cout<<"podaj liczbe:"<<"\n";
	std::cin>>a;
	std::cout<< is_even(a)<<"\n";
}