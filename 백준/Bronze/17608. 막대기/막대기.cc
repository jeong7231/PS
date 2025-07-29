#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int N;
    cin >> N;

    stack<int> s;
    int h;

    for (int i = 0; i < N; i++)
    {
        cin >> h;
        s.push(h);
    }

    int max = 0;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if (max < s.top())
        {
            count++;
            max = s.top();
            s.pop();
        }
        else
        {
            s.pop();
        }
    }

    cout << count;
}