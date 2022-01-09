#include <string>
#include <iostream>
#include <vector>


int main() 
{
    std::string input;

    std::cout << "Podaj dwie litery: " << std::endl;

    while (std::getline(std::cin, input) && input != "stop") {
        std::vector<std::string> elements;
        std::string item;
        std::stringstream ss (input);

        while (std::getline(ss, item, ' ')) {
            elements.push_back(item);
        }
        std::sort(elements.begin(), elements.end());
        if (elements.size() > 1) {
            char start = elements[0][0];
            char stop  = elements[1][0];
            while (start <= stop) {
                std::cout << start;
                start++;
            }
        } else if (elements.size() == 1) {
            std::cout << elements[0];
        }
        std::cout << "\n";
    }

    return 0;
}