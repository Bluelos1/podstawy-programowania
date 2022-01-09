#include <iostream>
#include <vector>

auto dot_product(std::vector<int> a, std::vector<int> b) -> int
{
	int wynik = 0;
	for(int i = 0;i<a.size();i++)
	{
		wynik += a[i] * b[i];
	}
	return wynik;
}

int main()
{
	std::vector<int>vector1 = {2,2,3};
	std::vector<int>vector2 = {2,2,1};
	std::cout<<dot_product(vector1, vector2);
return 0;
}