#include <stdio.h>

int main(void)
{
	int num;
	int remain[10];
	int defrent = 0;

	// num % 42를 10 번 돌려서 remain[10]에 저장
	for (int i = 0; i < 10; i++) 
	{
		scanf("%d", &num);
		remain[i] = num % 42;
	}

	// 배열 내 같은 수 찾을 때마다 count++
	// 같은수 한번도 못찾았으면 defrent++
	for (int i = 0; i < 10; i++)
	{
		int count = 0; // for문 돌릴때마다 초기화 시켜서 num[i] 마다 0부터 세야됨
		for (int j = i + 1; j < 10; j++)
		{
			if (remain[i] == remain[j]) 
				count++;
		}
		if (count == 0)
			defrent++;
		
	}
	printf("%d", defrent);

	return 0;
}