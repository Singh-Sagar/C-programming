#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef std::ostream print_t;

int main()
{
    // see how code readability is affected
    print_t &out = std::cout;
    pairlist_t pairlist;
    text_t anime = "fullmetal alchemist brotherhood";
    out << "my favorite anime is " << anime << std::endl;

    return 0;
}