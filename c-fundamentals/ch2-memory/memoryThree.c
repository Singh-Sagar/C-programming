#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[40];
    printf("Enter your name: ");
    scanf("%39s", name);
    printf("Hello %s", name);
}