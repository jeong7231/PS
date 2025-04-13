#include <stdio.h>

int main(void)
{
	int attendance[31] = { 0 };
	int a;
	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &a);
		attendance[a] = a;
	}

	for (int i = 1; i < 31; i++)
	{
		if (attendance[i] == 0)
		{
			printf("%d\n", i);
		}
	}

	return 0;
}
