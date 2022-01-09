#include <iostream>
#include <vector>

auto is_palindrome(std::string palindrome) -> bool
{
	for (int i=1;i<=palindrome.size(); i++){
		if(palindrome[i-1] != palindrome[palindrome.size() - i])
		{
			return false;
			
		}
	}
	return true;
}

std::vector<std::string> filter_palindromes(std::vector<std::string> wejscie) 
{
	std::vector<std::string> wyjscie;
	for(int i = 0; i<wejscie.size();i++)
	{
		if(is_palindrome(wejscie[i]))
		{
			wyjscie.push_back(wejscie[i]);
		}
	}return wyjscie;
}


auto main() -> int
{
	std::vector<std::string>wyrazy = {" kajak ", " anna " , "rower ", "oio"}, przefiltrowane;
	przefiltrowane = filter_palindromes(wyrazy);
	for (int i=0;i<przefiltrowane.size();i++)
	{
		std::cout << przefiltrowane [i];
	}
}