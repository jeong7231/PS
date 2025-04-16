#include<stdio.h>
#include<string.h>
int main(void)
{
    char word[100];
    scanf("%s", word);

    int length = strlen(word);
    int position[26];
    for (int i = 0; i < 26; i++)
    {
        position[i] = -1;
    }

    for (int i = 0; i < length; i++)
    {
        int index = word[i] - 'a';
        if (position[index] == -1)
        {
            position[index] = i;
        }  
    }
    
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", position[i]);
    }
    return 0;
}