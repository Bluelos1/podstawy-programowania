#include <iostream>
#include <string>


auto is_palindrome(std::string palindrome) -> std::string
{
	std::string result="";
	for (int i=1;i<=palindrome.size(); i++){
		result += palindrome[palindrome.size() - i];
	}
	
	return result;
}

int main() 
{

std::cout<<is_palindrome("nasdasdsadasdsad");
}