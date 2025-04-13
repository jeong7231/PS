#include <stdio.h>

    int main(void)
    {
        char string[1000];
        scanf("%s", string);

        int i;
        scanf("%d", &i);

        printf("%c\n", string[i-1]);
        return 0;
    }