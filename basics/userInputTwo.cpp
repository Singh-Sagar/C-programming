#include <iostream>

int main()
{

    std::string name;
    int age;

    std::cout << "enter age: ";
    std::cin >> age;
    std::cout << "what's your name?: ";
    std::getline(std::cin >> std::ws, name);
    std::cout << "hey " << name << ", you are " << age << " years old" << std::endl;
}