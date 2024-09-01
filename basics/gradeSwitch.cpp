#include <iostream>

int main()
{

    char grade;
    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch (grade)
    {
    case 'A':
        std::cout << "you are exceptional" << std::endl;
        break;
    case 'B':
        std::cout << "you are great" << std::endl;
        break;
    case 'C':
        std::cout << "you are above average" << std::endl;
        break;
    case 'D':
        std::cout << "you are at the verge of failing this course" << std::endl;
        break;
    case 'F':
        std::cout << "fail" << std::endl;
        break;
    default:
        std::cout << "please enter valid letter grade.";
    }
}