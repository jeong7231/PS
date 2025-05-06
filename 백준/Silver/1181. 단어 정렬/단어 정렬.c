#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char word[60];
} book;

int compare(const void *a, const void *b);

int main(void)
{
    int num;
    scanf("%d", &num);

    book N[20000];

    for (int i = 0; i < num; i++)
    {
        scanf("%s", N[i].word);
    }

    
    qsort(N, num, sizeof(book), compare);

    
    printf("%s\n", N[0].word); 
    for (int i = 1; i < num; i++)
    {
        if (strcmp(N[i].word, N[i - 1].word) != 0)
        {
            printf("%s\n", N[i].word);
        }
    }

    return 0;
}

int compare(const void *a, const void *b)
{
    const book *bookA = (const book *)a;
    const book *bookB = (const book *)b;

    int lenA = strlen(bookA->word);
    int lenB = strlen(bookB->word);

    if (lenA != lenB)
        return lenA - lenB; 

    return strcmp(bookA->word, bookB->word); 
}
