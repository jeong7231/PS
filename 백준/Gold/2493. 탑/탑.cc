#include <iostream>
#include <stack>
#include <utility>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    stack<pair<int, int>> s;

    int input;

    for (int i = 1; i <= N; i++)
    {
        cin >> input;
        while (!s.empty() && s.top().second < input)
        {
            s.pop();
        }
        if (s.empty())
            cout << "0 ";

        else
        {
            cout << s.top().first << " ";
        }
        s.push({i, input});
    }
}