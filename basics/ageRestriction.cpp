#include <iostream>

int main()
{

    int age;
    std::cout << "Age: ";
    std::cin >> age;
    if (age > 18)
    {
        std::cout << "you are allowed" << std::endl;
    }
    else
    {
        std::cout << "this site does not exist" << std::endl;
    }
}