#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> M >> N;

    int board[N][M];
    queue<pair<int, int>> Q;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
            if (board[i][j] == 1)
                Q.push({i, j});
        }
    }

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};

    while (!Q.empty())
    {
        pair<int, int> cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                continue;
            if (board[nx][ny] != 0)
                continue;
            board[nx][ny] = board[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }

    int day = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (board[i][j] == 0)
            {
                cout << -1;
                return 0;
            }
            day = max(day, board[i][j]);
        }
    }
    cout << day - 1;
}
