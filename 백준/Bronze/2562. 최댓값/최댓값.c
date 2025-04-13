#include<stdio.h>

int main(void)
{
    int num[9] = { 0 };
    int num2[9] = { 0 };
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
        num2[i] = num[i];
    }

    
    for (int i = 8; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp;
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    int find = 0;
    for (int i = 0; i < 9; i++)
    {
        if (num2[i] == num[8])
        {
            find = i;
        }
    }
    printf("%d\n", num[8]);
    printf("%d\n", find+1);

    return 0;
}