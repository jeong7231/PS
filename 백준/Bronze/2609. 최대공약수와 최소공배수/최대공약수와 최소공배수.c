#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int min;
    if(num1 > num2)
        min = num2;
    else
        min = num1;

    int gcd = 0; //최대공약수
    for(int i=1; i<=min; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
    printf("%d\n", gcd);

    int lcm = num1 * num2 / gcd; // 최소공배수
    printf("%d\n", lcm);
}
