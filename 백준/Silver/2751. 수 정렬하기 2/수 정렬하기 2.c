#include <stdio.h>
#include <stdlib.h>

int ascending(const void *a, const void *b);

int main(void)
{
    int n;
    scanf("%d", &n);

    int num[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
        if(i>0 && num[i]==num[i-1])
        {
            i--;
        }
    }

    qsort(num, n, sizeof(int), ascending);
    
    for(int i=0; i<n; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}

int ascending(const void *a, const void *b)
{
    if(*(int*)a > *(int*)b)
        return 1;
    else if (*(int*)a < *(int *)b)
        return -1;
    else
        return 0;    
}




