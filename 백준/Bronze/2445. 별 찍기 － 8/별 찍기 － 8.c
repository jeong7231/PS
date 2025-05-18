#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int line = 2 * n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < line + 1; j++)
        {
            if (j <= i || j >= line - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for (int i = n + 1; i <= line; i++)
    {
        for (int j = 0; j < line + 1; j++)
        {
            if (j <= i - (2 * (i - n) + 1) || j >= i)
                printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}