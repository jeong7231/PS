#include <iostream>
#include <string>
#include <list>
using namespace std;
int main()
{
    string inputString;
    cin >> inputString;

    list<char> l;
    for (char temp : inputString)
    {
        l.push_back(temp);
    }

    list<char>::iterator it = l.end();

    int M;
    cin >> M;

    string command;
    char X;

    for (int i = 0; i < M; i++)
    {
        cin >> command;
        if (command == "L")
        {
            if (it != l.begin())
                --it;
        }
        else if (command == "D")
        {
            if (it != l.end())
                ++it;
        }
        else if (command == "B")
        {
            if (it != l.begin())
            {
                --it;
                it = l.erase(it); 
            }
        }
        else if (command == "P")
        {
            cin >> X;
            l.insert(it, X);
        }
    }

    for (char temp : l)
    {
        cout << temp;
    }
}