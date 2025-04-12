#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int array[100] = { 0 };

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}

	int v;
	scanf("%d", &v);

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (array[i] == v)
		{
			count++;
		}
	}

	printf("%d\n", count);
	

	return 0;
}