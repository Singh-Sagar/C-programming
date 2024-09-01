#include <iostream>
#include <algorithm> // Include for std::max

int main() {
    int a = 1;
    int b = 50;
    int c = 25;

    // Correct the output statement
    std::cout << "a: " << a << " b: " << b << std::endl; // Added std::endl for better formatting
    int z = std::max(a, b);
    std::cout << "z: " << z << std::endl; // Added std::endl for better formatting

    return 0;
}
