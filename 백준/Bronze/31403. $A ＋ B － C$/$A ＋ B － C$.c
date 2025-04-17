#include <stdio.h>
#include <string.h>  // strcat
#include <stdlib.h> // atoi

int main(void)
{
    int a;
    scanf("%d", &a);

    int b;
    scanf("%d", &b);

    int c;
    scanf("%d", &c);

    printf("%d\n", (a + b) - c);

    char a_c[5]; 
    char b_c[5];
    char c_c[5];

    sprintf(a_c, "%d", a);  // 정수 -> 문자
    sprintf(b_c, "%d", b);
    sprintf(c_c, "%d", c);

    strcat(a_c, b_c);  // 문자+문자

    printf("%d\n", atoi(a_c) - atoi(c_c)); //문자 ->정수
    

    return 0;
}