#include <iostream>

namespace first
{
    int x = 10;
}

int main()
{
    // not importing the whole std namespace so that there is no
    // conflict as the std namespace is large enough

    using std::cout;
    using std::string;
    int x = 1;
    std::cout << x << std::endl;
    return 1;
}