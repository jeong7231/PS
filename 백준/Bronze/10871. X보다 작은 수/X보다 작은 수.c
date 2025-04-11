int main(void)
{
	int n, x;
	scanf("%d %d", &n, &x);

	int a[10000];
	for (int i = 0;i < n;i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (a[i] < x)
		{
			printf("%d ", a[i]);
		}
	}
	return 0;
}