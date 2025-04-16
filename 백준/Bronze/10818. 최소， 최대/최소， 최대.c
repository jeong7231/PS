#include<stdio.h>

int main(void)
{
    
    int n;
    int min = 1000000, max = -1000000;
    scanf("%d", &n);

    int input;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);

        if (input >= max)
        {
            max = input;
        }
        if (input <= min)
        {
            min = input;
        }

    }
    printf("%d %d", min, max);

    return 0;
}