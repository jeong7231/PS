#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int age;
    int index; 
    char name[101];
} user_info;

int ascending(const void *a, const void *b);

int main(void)
{
    int n;
    scanf("%d", &n);

    user_info *list = malloc(sizeof(user_info) * n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &list[i].age, list[i].name);
        list[i].index = i; 
    }

    qsort(list, n, sizeof(user_info), ascending);

    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", list[i].age, list[i].name);
    }

    free(list);

    return 0;
}

int ascending(const void *a, const void *b)
{
    user_info *user_a = (user_info *)a;
    user_info *user_b = (user_info *)b;
    if (user_a->age > user_b->age)
        return 1;
    else if (user_a->age < user_b->age)
        return -1;
    else
        return user_a->index - user_b->index; 
}
