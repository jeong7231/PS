#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, L;
    cin >> N >> L;

    deque<int> DQ;
    vector<int> temp;

    string input;
    int num;
    cin.ignore();
    getline(cin, input);
    stringstream SS(input);
    while (SS >> num)
    {
        temp.push_back(num);
    }

    for (int i = 0; i < N; i++)
    {
        while (!DQ.empty() && temp[DQ.back()] > temp[i])
        {
            DQ.pop_back();
        }
        DQ.push_back(i);

        if (DQ.front() <= i - L)
        {
            DQ.pop_front();
        }
        cout << temp[DQ.front()] << ' ';
    }
}