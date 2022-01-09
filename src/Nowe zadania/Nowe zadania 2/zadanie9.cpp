#include <iostream>
#include <string>
#include <vector>

bool contains_all(std::vector<int>x, std::vector<int>y)
{
    int liczba;
    std::vector<int> zbior;


    for(int i = 0; i <x.size(); i++)
    {
        for(int k = 0; k < y.size(); k++)
        {            
            if(x[i] == y[k])
            {
                zbior.push_back(y[k]);
            }
        }
    }


    if(x.size() == zbior.size())
    {
        return true;
    }
    else
    {
        return false;
    }
}



int main()
{
    std::vector<int> x = {6,7,10,12,14,33}, y ={6,7,10,40};
    if(contains_all(x,y))
    {
        std::cout << "Zawiera";
    }
    else
    {
        std::cout << "Nie zawiera";
    }
    return 0;
}