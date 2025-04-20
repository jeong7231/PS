#include <stdio.h>

int main(void)
{
	int n;
	int* pn;

	pn = &n;

	scanf("%d", pn);

	int size[6];
	int* ps;
	ps = size;

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", ps++);
	}

	int t, p;
	
	int* pt, * pp;

	pt = &t;
	pp = &p;

	scanf("%d %d", pt, pp);


	int t_count = 0;
	int* pt_count = &t_count;

	#include <stdio.h>

int main(void)
{
	int n;
	int* pn;

	pn = &n;

	scanf("%d", pn);

	int size[6];
	int* ps;
	ps = size;

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", ps++);
	}

	int t, p;
	
	int* pt, * pp;

	pt = &t;
	pp = &p;

	scanf("%d %d", pt, pp);


	int t_count = 0;
	int* pt_count = &t_count;

	for (int i = 0; i < 6; i++)
	{
		*pt_count += size[i] / *pt;
		if (size[i] % *pt != 0)
		{
			*pt_count += 1;
		}
	}

	int p_count;
	p_count = *pn / *pp;
	int p_count_each;
	p_count_each = *pn % *pp;


	printf("%d\n", t_count);
	printf("%d %d\n", p_count, p_count_each);

	return 0;
}

	int p_count;
	p_count = *pn / *pp;
	int p_count_each;
	p_count_each = *pn % *pp;


	printf("%d\n", t_count);
	printf("%d %d\n", p_count, p_count_each);

	return 0;
}
