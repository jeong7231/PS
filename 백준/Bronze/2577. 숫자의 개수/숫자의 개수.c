#include <stdio.h>
#include <string.h>

int main(void)
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    long long int mul = a * b * c;  

    char mul_ary[20];
    sprintf(mul_ary, "%lld", mul);

    int length = strlen(mul_ary);

    char num_ary[10] = { 0 };

    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (mul_ary[i] == j+48) 
            {
                num_ary[j]++;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", num_ary[i]);
    }

    return 0;
}
