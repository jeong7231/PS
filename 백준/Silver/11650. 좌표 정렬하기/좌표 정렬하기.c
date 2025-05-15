#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
} location;

int ascending(const void *a, const void *b);


int main(void)
{
    int n;
    scanf("%d", &n);

    location *list = malloc(sizeof(location) * n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &list[i].x, &list[i].y);
    }

    qsort(list, n, sizeof(location), ascending);

    for(int i = 0; i < n; i++)
    {
        printf("%d %d\n", list[i].x, list[i].y);
    }

    free(list);
    return 0;
}

int ascending(const void *a, const void *b)
{
    location *l_a = (location *)a;
    location *l_b = (location *)b;

    if (l_a->x > l_b->x) return 1;

    else if (l_a->x < l_b->x) return -1;

    else {
        if (l_a->y > l_b->y) return 1;
        else if (l_a->y < l_b->y) return -1;
        else return 0;
    }
}