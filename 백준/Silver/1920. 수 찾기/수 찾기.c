#include <stdio.h>
#include <stdlib.h>
int ascending(const void *a, const void *b);
int binary_search(int arr[], int size, int target);

int main(void)
{
    int n;
    scanf("%d", &n);

    int array_n[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array_n[i]);
    }

    qsort(array_n, n, sizeof(int), ascending);

    int m;
    scanf("%d", &m);

    int array_m[m];

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &array_m[i]);
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", binary_search(array_n, n, array_m[i]));
    }

    return 0;
}

int ascending(const void *a, const void *b)
{
    if (*(int *)a > *(int *)b)
        return 1;

    else if (*(int *)a < *(int *)b)
        return -1;

    else
        return 0;
}

int binary_search(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return 1;

        if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
    }

    return 0;
}