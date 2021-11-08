#include <iostream>
#include <string>



auto main() -> int
{
        int a,b;
        std::cout <<"podaj wysokość: ";
        std::cin >> a;
        
for(b=1; b<=a; b++)
    {
  for(int x=a-1; x>=b; x--)
        {
            std::cout<<" ";
        }
 

for(int x=1; x<=b; x++)
        {
            std::cout<<"* ";
        }
	std::cout<<"\n";
    }
return 0;
}





