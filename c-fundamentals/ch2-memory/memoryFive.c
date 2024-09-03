#include <stdio.h>
#include <stdlib.h>

int main()
{
    // scanf buffer overflow example
    // if user enters more than 5 characters, scanf will buffer overflow
    // this is a serious security issue
    char food[5];
    printf("Enter your favorite food: ");
    scanf("%s", food);
    printf("Favorite food: %s\n", food);
}