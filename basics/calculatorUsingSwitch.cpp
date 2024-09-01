#include <iostream>

int main()
{
    char temp;
    int a, b;
    std::cout << "Enter first number: " << std::endl;
    std::cin >> a;
    std::cout << "Enter operator: " << std::endl;
    std::cin >> temp;
    std::cout << "Enter second number: " << std::endl;
    std::cin >> b;

    switch (temp)
    {
    case '+':
        std::cout << "a + b = " << a + b << std::endl;
        break;
    case '-':
        std::cout << "a - b = " << a - b << std::endl;
        break;
    case '*':
        std::cout << "a x b = " << a * b << std::endl;
        break;
    case '/':
        std::cout << "a / b = " << a / b << std::endl;
        break;
    }

    return 0;
}