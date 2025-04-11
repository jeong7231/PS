#include <stdio.h>

int main(void)
{
	int d1, d2, d3;
	scanf("%d %d %d", &d1, &d2, &d3);

	if (d1 == d2 && d2 == d3 && d1 == d3)
		printf("%d", 10000 + d1 * 1000);
	else
	{
		if (d1 == d2 || d1 == d3)
		{
			printf("%d", 1000 + d1 * 100);
		}
		else if (d2 == d3)
		{
			printf("%d", 1000 + d2 * 100);
		}
		else if (d1 != d2 && d2 != d3 && d1 != d3)
		{
			if (d1 > d2 && d1 > d3)
			{
				printf("%d", d1 * 100);
			}
			else if (d2 > d1 && d2 > d3)
			{
				printf("%d", d2 * 100);
			}
			else if (d3 > d1 && d3 > d2)
			{
				printf("%d", d3 * 100);
			}
		}
	}

	return 0;
}