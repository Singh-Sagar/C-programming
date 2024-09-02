#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 98;
    int *address_of_x = &x;
    int value_stored = *address_of_x;
    printf("the variable x is stored at: %p and its value is %d\n", (address_of_x), value_stored);
    return 0;
}