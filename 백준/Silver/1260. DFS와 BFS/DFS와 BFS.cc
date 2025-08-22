#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int graph[1001][1001] = {0};
int visited[1001];

int main()
{
    int N, M, V;
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    stack<int> S;
    S.push(V);

    fill(visited, visited + 1001, 0);

    while (!S.empty())
    {
        int cur = S.top();
        S.pop();
        if (visited[cur])
            continue;
        visited[cur] = 1;
        cout << cur << ' ';
        for (int i = N; i >= 1; i--)
        {
            if (graph[cur][i] && visited[i] == 0)
                S.push(i);
        }
    }
    cout << endl;

    queue<int> Q;
    Q.push(V);
    fill(visited, visited + 1001, 0);
    visited[V] = 1;
    while (!Q.empty())
    {
        int cur = Q.front();
        Q.pop();
        cout << cur << ' ';
        for (int i = 1; i <= N; i++)
        {
            if (graph[cur][i] && visited[i] == 0)
            {
                Q.push(i);
                visited[i] = 1;
            }
        }
    }
}
