#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int get = 1;

    int input;

    stack<int> s;

    for (int i = 0; i < N; i++)
    {
        cin >> input;

        if (get == input)
            get++;
        else
            s.push(input);

        while (!s.empty() && s.top() == get)
        {
            s.pop();
            get++;
        }
    }

    if (s.empty())
        cout << "Nice";
    else
        cout << "Sad";
}
