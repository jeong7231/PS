#include <stdio.h>
#include <string.h> 

int main(void)
{
    char str[1000000];
    gets(str);

    int length = strlen(str);
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}