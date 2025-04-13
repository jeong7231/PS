#include <stdio.h>

    int main(void)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        int i1, j1, k1;
        int basket[100] = { 0 };

        for (int i = 0; i < m; i++)
        {
            scanf("%d %d %d", &i1, &j1, &k1);

            for (int j = i1 - 1; j < j1; j++)
            {
                basket[j] = k1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", basket[i]);
        }
        return 0;
    }