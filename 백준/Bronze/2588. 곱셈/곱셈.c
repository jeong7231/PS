#include <stdio.h>

int main(void)
{
	int num1, num2, n100, n10, n1, sum;
	
	scanf("%d %d", &num1, &num2);
	n100 = num2 / 100;
	n10 = (num2 % 100) / 10;
	n1 = (num2 % 100) % 10;
	sum = (num1 * n1) + (num1 * n10) * 10 + (num1 * n100) * 100;

	printf("%d\n", num1 * n1);
	printf("%d\n", num1 * n10);
	printf("%d\n", num1 * n100);
	printf("%d\n", sum);

	return 0;
}