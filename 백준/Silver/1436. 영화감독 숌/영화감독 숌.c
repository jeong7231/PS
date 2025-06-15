#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    unsigned long long i = 0;
    char str[50];
    int count = 0;

    char find_666[4] = "666";

    while (1)
    {
        i++;
        sprintf(str, "%llu", i);

        if (strstr(str, find_666) != NULL)
        {
            count += 1;
        }

        if (count == n)
        {
            break;
        }
    }

    printf("%llu\n", i);  

    return 0;
}
