#include <stdio.h>

int main(void)
{
    int num[8];
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &num[i]);
    }
    
    int check=0;
    if (num[0] == 1)
    {
        for (int i = 0; i < 8; i++)
        {
            if (num[i] == i + 1)
            {
                check = 1;
            }
            else
            {
                check = 0;
                break;
            }
        }
    }

    else if (num[0] == 8)
    {
        for (int i = 0; i < 8; i++)
        {
            if (num[i] == 8-i)
            {
                check = 2;
            }
            else
            {
                check = 0;
                break;
            }
        }
    }

    if (check == 1)
    {
        printf("ascending");
    }
    else if (check == 2)
    {
        printf("descending");
    }
    else
    {
        printf("mixed");
    }
    return 0;
}