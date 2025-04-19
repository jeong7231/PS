#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    
    char str[80];

    for (int i = 0; i < t; i++)
    {

        scanf("%s", str);
        
        int length = strlen(str);
        int sum = 0;
        int combo = 0;
        
        
        for (int j = 0; j < length; j++)
        {
            if (str[j] == 'O')
            {
                combo++;
                sum += combo;
            }
            else
            {
                combo = 0;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}