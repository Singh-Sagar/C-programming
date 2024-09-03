#include <stdio.h>
#include <stdlib.h>

int main()
{
    char food[5];
    printf("Enter favorite food: ");
    fgets(food, sizeof(food), stdin);
    printf("%s\n", food);
    return 0;
}