#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string command;
    deque<int> dq;

    int X;

    for(int i=0; i<N; i++)
    {
        cin >> command;

        if(command == "push_front")
        {
            cin >> X;
            dq.push_front(X);
        }
        else if(command == "push_back")
        {
            cin >> X;
            dq.push_back(X);
        }
        else if(command == "pop_front")
        {
            if(dq.empty()) cout << "-1" << endl;
            else
            {
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }
        else if(command == "pop_back")
        {
            if(dq.empty()) cout << "-1" << endl;
            else
            {
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }
        else if(command == "size")
        {
            cout << dq.size() << endl;
        }
        else if(command == "empty")
        {
            if(dq.empty()) cout << "1" << endl;
            else cout << "0" << endl;
        }
        else if(command == "front")
        {
            if(!dq.empty()) cout<< dq.front() << endl;
            else cout << "-1" << endl;
        }
        else if(command == "back")
        {
            if(!dq.empty()) cout << dq.back() << endl;
            else cout << "-1" << endl;
        }
    }
}