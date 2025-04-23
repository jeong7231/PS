#include <stdio.h>
#include <string.h>

int main(void)
{
    char num[100000] = { '\0' };
    while (1)
    {
        scanf("%s", num);
        if (num[0] == '0') break;

        int length = strlen(num);
        char r_num[100000] = { '\0' };

        for (int i = 0; i < length; i++)
        {
            r_num[length - i - 1] = num[i]; 
        }
        r_num[length] = '\0'; 

        if (strcmp(num, r_num) == 0)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}