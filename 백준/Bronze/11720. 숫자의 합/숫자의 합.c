#include <stdio.h>

    int main(void)
    {
        int n;
        scanf("%d", &n);

        int sum = 0;
        char array[100];
        scanf("%s", array);

        for (int i = 0; i < n; i++)
        {
            sum += array[i] - 48;
        }
        // 0 : null 48 : 0 57 : 9

        printf("%d", sum);
        return 0;
    }