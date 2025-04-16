#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int scores[1000] = { 0 };
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    int sum = 0; 
    double avg = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += scores[i];
    }

    int max = 0;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (scores[j] > scores[j + 1])
            {
                int temp;
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }
    max = scores[n - 1];

    double new_scores[1000] = { 0 };
    for (int i = 0; i < n; i++)
    {
        new_scores[i] = ((double)scores[i] / max) * 100;
    }

    double new_sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        new_sum += new_scores[i];
    }
    avg = (double)(new_sum / n);

    printf("%lf", avg);
    return 0;
}