#include <stdio.h>

int main(void)
{
    char str;

    while (scanf("%c", &str)!=EOF)
    {
        printf("%c", str);
    }

    return 0;
}