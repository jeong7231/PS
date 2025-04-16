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
    for (int i = 1; i <= M; i++)
    {
        scanf("%d %d", &I, &J);
        int temp;
        temp = basket[J];
        basket[J] = basket[I];
        basket[I] = temp;
    }

    for (int i = 1; i <= N; i++)
    {
        printf("%d ", basket[i]);
    }

    return 0;
}