#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int computer[101][101] = {0};
    int virus[101];

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        computer[a][b] = 1;
        computer[b][a] = 1;
    }

    stack<int> S;
    S.push(1);

    fill(virus, virus + 101, 0);

    while (!S.empty())
    {
        int cur = S.top();
        S.pop();
        if (virus[cur])
            continue;

        virus[cur] = 1;

        for (int i = N; i >= 1; i--)
        {
            if (computer[cur][i] && virus[i] == 0)
                S.push(i);
        }
    }

    int count = 0;
    for (int i = 2; i <= N; i++)
    {
        if (virus[i])
            count++;
    }
    cout << count;
}