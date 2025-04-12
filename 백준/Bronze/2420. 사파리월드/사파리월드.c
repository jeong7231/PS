#include <stdio.h>

int main (void)
{
    long long n, m;
    long long gap;
    
    scanf("%lld %lld", &n, &m);
    
    gap = n - m;
    
    if (n - m < 0)
    {
        gap *= -1;
    }
    
    printf("%lld", gap);
    
    
    return 0;
}