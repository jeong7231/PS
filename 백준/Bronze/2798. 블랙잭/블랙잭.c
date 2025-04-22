#include <stdio.h>

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);

	int card_array[100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &card_array[i]);
	}

	int sum = 0;
	for (int i = 0; i < n-2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				int current = card_array[i] + card_array[j] + card_array[k];
				if (current <= m && current > sum)
				{
					sum = current;
				}
			}
		}
	}

	printf("%d", sum);

	return 0;
}