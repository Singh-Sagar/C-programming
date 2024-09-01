#include <iostream>

int main()
{
    std::string name;

    std::cout << "what is your name? ";
    std::getline(std::cin, name);
    std::cout << name << std::endl;
}