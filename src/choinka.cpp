#include <iostream>
#include <string>


int main() 
{
    int a, b;
    std::cout << "podaj wysokość: ";
    std::cin >> a;
    
    int n = a * 2+1;
    

    
    std::cout<<"\n";


    for (b = -1; b <= a; b++) {
        for (int x = a - 1; x >= b; x--) {
            std::cout << "*";
        }
        for (int x = 0; x <= b; x++) {
            std::cout << "  ";
        }
        
       
        
        for (int x = a - 1; x >= b; x--) {
            std::cout << "*";
        }
        std::cout<<"\n";

    }
    
    for (int i=0;i<=n;i++){
        std::cout<<"*";
    }
    
    return 0;
}
