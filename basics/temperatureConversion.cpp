#include <iostream>

int main()
{
    double temperatureCelsius, temperatureFahrenheit;
    char scale;
    std::cout << "Choose input scale(F=Fahrenheit, C=Celsius)";
    std::cin >> scale;

    switch (scale)
    {
    case 'F':
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> temperatureFahrenheit;
        std::cout << (5.00 / 9) * (temperatureFahrenheit - 32) << std::endl;
        break;
    case 'C':
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> temperatureCelsius;
        std::cout << (9.00 / 5) * temperatureCelsius + 32 << std::endl;
        break;
    default:
        std::cout << "Enter one of the two options" << std::endl;
    }
}