#include<stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);

    int n;
    scanf("%d", &n);

    int sum = 0;
    int a, b;

    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d", &a, &b);

        sum += a * b;
    }

    if (sum == x)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}