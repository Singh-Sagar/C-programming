#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dangerous[10];
    gets(dangerous);
    printf("%s\n", dangerous);
}