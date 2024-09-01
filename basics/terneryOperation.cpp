#include <iostream>

int main()
{
    int a, b;
    std::cout << "enter first number: " << std::endl;
    std::cin >> a;
    std::cout << "a = " << a << std::endl;
    std::cout << "enter second number: " << std::endl;
    std::cin >> b;
    std::cout << "b = " << b << std::endl;
    a > b ? std::cout << "a is greater than b" << std::endl : std::cout << "b is greater than a" << std::endl;

    return 0;
}