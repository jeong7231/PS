#include<stdio.h>

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);

    int basket[100] = { 0 };
    for (int i = 1; i <= N; i++)
    {
        basket[i] = i;
    }

    int I, J;
    for (int i = 0; i < M; i++)
    {
        scanf("%d %d", &I, &J);

        // 바구니 I부터 J까지 역순으로 변경
        for (int j = 0; j < (J - I + 1) / 2; j++)
        {
            int temp = basket[I + j];
            basket[I + j] = basket[J - j];
            basket[J - j] = temp;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        printf("%d ", basket[i]);
    }

    return 0;
}