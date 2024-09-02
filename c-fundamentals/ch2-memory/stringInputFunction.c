#include <stdio.h>
#include <stdlib.h>

void fortune_cookies(char msg[])
{
    printf("Message reads: %s\n", msg);
}

int main()
{
    char quote[] = "Cookies make you fat";
    fortune_cookies(quote);
    return 0;
}