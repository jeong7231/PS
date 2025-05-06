#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 51

int compare(const void *arg1, const void *arg2);

int main(void)
{
    int num, length = 51;

    char arr[20000][SIZE] = {0};

    scanf("%d", &num);

    for (int i = 0; i < num; i++)
        scanf("%s", arr[i]);

    qsort(arr, num, sizeof(arr[0]), compare);

    for (int i = 0; i < num; i++)
    {
        if (strcmp(arr[i], arr[i + 1]) != 0 || i == num - 1)
            printf("%s\n", arr[i]);
    }

    return 0;
}
int compare(const void *arg1, const void *arg2)
{
    if (strlen((const char *)arg1) > strlen((const char *)arg2))
        return 1;
    else if (strlen((const char *)arg1) < strlen((const char *)arg2))
        return -1;
    else
        return strcmp((char *)arg1, (char *)arg2);
} 