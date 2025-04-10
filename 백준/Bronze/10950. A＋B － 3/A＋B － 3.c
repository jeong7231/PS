#include <stdio.h>

int main(void)
{
	int t, i;
	int a, b, sum;
	
	scanf("%d", &t);
	for (i = 1;i <= t;i++)
	{
		scanf("%d %d", &a, &b);
		sum = (a + b);

		printf("%d\n", sum);
	}
	return 0;
}