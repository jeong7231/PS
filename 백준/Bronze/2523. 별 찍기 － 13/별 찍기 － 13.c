#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int line = 2 * n - 1;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j<=i) printf("*");
        }
        printf("\n");
    }
    for(int i=n; i<line; i++)
    {
        for(int j=n; j>0; j--)
        {
            if(j>i-n+1) printf("*");
        }
        printf("\n");
    }
    
    
    
    return 0;
}