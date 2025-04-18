#include <stdio.h>

int main(void)
{
    // 1. 층수 floor = n % h
    // 2. 방 room = n / h + 1
    // 3. 만약 n % h 가 0인 경우는 꼭대기 층 -> floor = h, room = n/h


    int floor, room;

    int t, h, w, n;

    scanf("%d", &t);
    for (int j = 0; j < t; j++)
    {
        scanf("%d %d %d", &h, &w, &n);

        floor = n % h;
        room = n / h + 1;
        if (n % h == 0)
        {
            floor = h;
            room = n / h;
        }
        printf("%d%02d\n", floor, room);
    }

    return 0;
}