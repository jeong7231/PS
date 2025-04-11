#include <stdio.h>

int main(void)
{
	int id_num[6];
	for (int i = 0; i < 5;i++)
	{
		scanf("%d", &id_num[i]);
	}
	int v_num = 0;
	for (int i = 0; i < 5;i++)
	{
		v_num += id_num[i] * id_num[i];
	}
	v_num %= 10;

	printf("%d", v_num);

	return 0;
}