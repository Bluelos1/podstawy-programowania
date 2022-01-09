#include <iostream>
#include <string>



void box_print(std::string s1,std::string s2,std::string s3,std::string s4,std::string s5,std::string s6)
{
	std::string tab[6] = {s1,s2,s3,s4,s5,s6};

	int biggest_word = 0;
	for(int i = 0; i<6;++i)
	
		if (biggest_word < tab[i].size())
			biggest_word = tab[i].size();
	
	for(int i = 0;i < biggest_word + 4; ++i)
	
		std::cout << "*";
		
	

	for (int i = 0; i < 6; ++i)
	{
		std::cout <<"\n"<<"* ";
		std::cout << tab[i];

		for (int j = 0; j < (biggest_word -tab[i].size());++j)
		
			std::cout<<" ";
			std::cout<<" *"<<"\n";

		
	}

		std::cout<<"\n";

		for(int i = 0;i<biggest_word + 4; ++i)
		{
		std::cout << "*";
		}
	}

	int main()
	{
		box_print("hello","word","in","a","frame","jababdsadasdasdasabda");
		return 0;
	}

