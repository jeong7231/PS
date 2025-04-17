#include<stdio.h>
#include<string.h> 

int main(void)
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int R;
        char S[50];
        char result[200];
        int result_index = 0;
        scanf("%d %s", &R, S);

        int length = strlen(S);
        for (int j = 0; j < length; j++)
        {
            for (int k = 0; k < R; k++)
            {
                result[result_index] = S[j];
                result_index++;
            }
        }
        result[result_index] = '\0';
        printf("%s\n", result);
    }

    return 0;
}
