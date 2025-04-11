#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	int c;
	scanf("%d", &c);

	if (b + c < 60)
	{
		printf("%d %d", a, b + c);
	}
	else
	{
		int h, m;
		h = (b + c) / 60;
		m = (b + c) % 60;
		if (a + h < 24)
		{
			printf("%d %d", a + h, m);
		}
		else
		{
			printf("%d %d", a + h - 24, m);
		}
	}

	return 0;
}