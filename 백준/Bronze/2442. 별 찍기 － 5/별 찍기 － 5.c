#include <stdio.h>

int main(void)
{
	int i, j;
	int n;
	scanf("%d", &n);


	for (i = 1;i <= n;i++)
	{
		for (j = n - 1;j >= i ;j--)
		{
			printf(" ");
		}
		for (j = 1;j <= 2 * i - 1;j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}