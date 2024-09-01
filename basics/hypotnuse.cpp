#include <iostream>
#include <algorithm>
#include <cmath> // Include cmath for pow() and sqrt()

int main()
{

    double a, b;
    double c;
    std::cout << "Enter value for a: ";
    std::cin >> a;
    a = pow(a, 2);
    std::cout << "Enter value for b: ";
    std::cin >> b;
    b = pow(b, 2);
    c = sqrt(a + b);
    std::cout << "hypotnuse: " << c;
}