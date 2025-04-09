#include <stdio.h>

int main(void)
{
	long long a, b, c, sum;

	scanf("%lld %lld %lld", &a, &b, &c);

	sum = a + b + c;

	printf("%lld", sum);

	return 0;
}