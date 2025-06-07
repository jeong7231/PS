#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int find = 0;

    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int temp = i;

        while (temp > 0)
        {
            num += temp % 10;
            temp /= 10;
        }

        if (num == n)
        {
            printf("%d\n", i);
            find = 1;
            break;
        }
    }
    if (find == 0)
    {
        printf("%d\n", 0);
    }

    return 0;
}
