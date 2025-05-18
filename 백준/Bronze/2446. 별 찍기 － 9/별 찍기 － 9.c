#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int line = 2 * n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < line; j++)
        {
            if (j < i)
                printf(" ");
            else if(j<line-i)
                printf("*");
        }
        printf("\n");
    }
    for (int i = n; i < line; i++)
    {
        for (int j = 0; j < line; j++)
        {
            if (j < (n-1)-(i-n+1))
                printf(" ");
            else if(j<=i)
                printf("*");
        }
        printf("\n");
    }
    return 0;
}