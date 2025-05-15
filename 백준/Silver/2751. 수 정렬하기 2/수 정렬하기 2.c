#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main(void)
{
    int n;
    scanf("%d", &n);

    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);

        if(i>0 && num[i]==num[i-1])
            i--;
    }

    qsort(num, n, sizeof(int), compare);

    for (int i = 0; i < n; i++)
    {  
        printf("%d\n", num[i]);
    }

    return 0;
}

int compare(const void *a, const void *b)
{

    int result = (*(int *)a - *(int *)b);
    return result;
}
