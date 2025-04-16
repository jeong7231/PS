#include<stdio.h>
#include<string.h>
int main(void)
{
    int T;
    scanf("%d", &T);
    
    char result[3];
    int length;
    for (int i = 0; i < T; i++)
    {
        char str[1001];
        scanf("%s", str);

        length = strlen(str);
        result[0] = str[0];
        result[1] = str[length - 1];
        result[2] = '\0'; 

        printf("%s\n", result);
    }
    return 0;
}