#include <stdio.h>
#define MAX 500001

int card[MAX];
int front = 0;
int rear = 0;

void push(int x);
int pop();
int size();


int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        push(i);
    }

    while (size()>1)
    {
        pop();
        push(pop());
    }

    printf("%d\n", pop());

    return 0;
}

void push(int x)
{
    card[rear] = x;
    rear = (rear + 1) % MAX;
}

int pop()
{
    int temp = card[front];
    front = (front +1) % MAX;
    return temp;
}

int size()
{
    return (rear - front + MAX) % MAX;
}