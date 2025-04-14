#include<stdio.h>
#include<string.h>

int main(void)
{
    char word[101];
    scanf("%s", word);

    int length = strlen(word); // 문자열의 실제 길이를 계산

    char revers_word[101];

    for (int i = 0; i < length; i++)
    {
        revers_word[length - 1 - i] = word[i]; // 역순으로 저장
    }

    revers_word[length] = '\0'; // 널 문자 추가하여 문자열로 변환

    if (!strcmp(word, revers_word)) // 두 문자열 비교
    {
        printf("1\n"); // 펠린드롬이면 1 출력
    }
    else
    {
        printf("0\n"); // 펠린드롬이 아니면 0 출력
    }
    return 0;
}