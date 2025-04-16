#include <stdio.h>

int main(void)
{
	int array[9][9] = { 0 };
	//입력
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	//최댓값
	int max = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if(max<array[i][j])
				max = array[i][j];
		}
	}
	printf("%d\n", max);

	// 두개 이상 일 시 위치 찾기
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (max == array[i][j])
				printf("%d %d\n", i+1, j+1);
		}
	}
	return 0;
}