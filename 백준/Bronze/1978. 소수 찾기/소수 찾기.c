#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int count = 0;
	int array[200];
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);

		if (array[i] <= 1)
		{
			continue;
		}

		int is_prime = 1;
		for (int j = 2; j * j <= array[i]; j++)
		{
			if (array[i] % j == 0)
			{
				is_prime = 0;
				break;
			}
		}

		if (is_prime)
		{
			count++;
		}
	}
	
	

	printf("%d", count);

	return 0;
}