#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    for (int i = 4; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            printf("long ");
        }
        
    }
    printf("int\n");

    return 0;
}