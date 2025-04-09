#include <stdio.h>

int main(void)
{
	double a, b, s;

	scanf("%lf %lf", &a, &b);

	s = a / b;

	printf("%.15lf", s);

	return 0;
}