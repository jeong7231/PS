#include <stdio.h>

int factorial(int num);

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int result = factorial(n) / (factorial(n - k) * factorial(k));

    printf("%d\n", result);
}

int factorial(int num)
{
    int result_fac = 1;
    for(int i=num; i>0; i--)
    {   
        result_fac *= i;
    }   

    return result_fac;
}
