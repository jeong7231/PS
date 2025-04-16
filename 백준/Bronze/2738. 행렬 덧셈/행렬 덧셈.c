#include <stdio.h>

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);

	int arr_a[100][100] = { 0 };
	for(int i=0; i<n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr_a[i][j]);
		}
	}

	int arr_b[100][100] = { 0 };
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr_b[i][j]);
		}
	}

	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", arr_a[i][j] + arr_b[i][j]);
		}
		printf("\n");
	}
	return 0;
}