#include<stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    int a, b;
    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}