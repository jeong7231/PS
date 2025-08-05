#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    while (1)
    {
        string input;
        stack<char> s;
        bool flag = true;

        getline(cin, input);

        if (input == ".")
        {
            break;
        }

        for (char temp : input)
        {

            if (temp == '(' || temp == '[')
            {
                s.push(temp);
            }
            else if (temp == ')')
            {
                if (s.empty() || s.top() != '(')
                {
                    flag = false;
                    break;
                }
                else
                {
                    s.pop();
                }
            }
            else if (temp == ']')
            {
                if (s.empty() || s.top() != '[')
                {
                    flag = false;
                    break;
                }
                else
                {
                    s.pop();
                }
            }
            else if (temp == '.')
            {
                break;
            }
        }

        if (s.empty() && flag)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}