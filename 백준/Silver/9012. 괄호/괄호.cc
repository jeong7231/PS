#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int T;
    cin >> T;
    
    
    for (int i = 0; i < T; i++)
    {
        bool flag = true;
        string input;
        cin >> input;

        stack<char> s;
        for (char temp : input)
        {
            if (temp == '(')
                s.push(temp);
            else if (temp == ')')
            {
                if(s.empty())
                {
                    flag = false;
                    break;
                }

                if (!s.empty())
                {
                    s.pop();
                }
            }
        }
        if (!s.empty() || flag == false)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;

    }
}