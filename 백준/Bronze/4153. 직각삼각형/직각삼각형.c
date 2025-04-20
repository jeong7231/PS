#include <stdio.h>

int main(void)
{
	int tri[3];

	while (1)
	{
		// 입력 받기
		for (int i = 0; i < 3; i++)
		{
			scanf("%d", &tri[i]);
		}

		// 모두 0 이면 종료
		if (tri[0] == 0 && tri[1] == 0 && tri[2] == 0)
		{
			break;
		}

		// 배열 정렬
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2-i; j++)
			{
				if (tri[j] > tri[j + 1])
				{
					int temp;
					temp = tri[j];
					tri[j] = tri[j + 1];
					tri[j + 1] = temp;
				}
			}
		}

		// 피타고라스
		if (tri[2] * tri[2] == tri[0] * tri[0] + tri[1] * tri[1])
		{
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
		}
	}

	return 0;
}