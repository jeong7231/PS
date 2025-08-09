#include <iostream>
#include <deque>
#include <utility>
using namespace std;

int main()
{
    int N;
    cin >> N;

    deque<pair<int, int>> dq;
    for (int i = 1; i <= N; i++)
    {
        int x;
        cin >> x;
        dq.push_back({i, x});
    }

    while (!dq.empty())
    {
        int k = dq.front().second;
        cout << dq.front().first << " ";
        dq.pop_front();
        if (dq.empty())
            break;

        if (k < 0)
        {
            int temp = (-k) % dq.size();
            for (int i = 0; i < temp; i++)
            {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
        else if (k > 0)
        {
            int temp = (k - 1) % dq.size();
            for (int i = 0; i < temp; i++)
            {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
    }
    return 0;
}
