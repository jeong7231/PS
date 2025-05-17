#include <stdio.h>
#include <limits.h>

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    char board[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf(" %c", &board[i][j]);
        }
    }

    int min = INT_MAX;

    
    for (int y = 0; y <= n - 8; y++)
    {
        for (int x = 0; x <= m - 8; x++)
        {
            int repair_w = 0, repair_b = 0;
            
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    char current = board[y + i][x + j];

                    if ((i + j) % 2 == 0)
                    {
                        if (current != 'W')
                        {
                            repair_w++;
                        }
                        if (current != 'B')
                        {
                            repair_b++;
                        }
                    }
                    else
                    {
                        if (current != 'W')
                        {
                            repair_b++;
                        }
                        if (current != 'B')
                        {
                            repair_w++;
                        }
                    }
                }
            }
            int result = repair_w < repair_b ? repair_w : repair_b;

            if(result < min)
            {
                min = result;
            }
        }
    }


    printf("%d", min);

    return 0;
}