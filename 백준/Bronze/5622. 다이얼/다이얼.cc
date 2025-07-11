#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string input;
    vector<string> v = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

    cin >> input;


    int time=0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < input.size(); j++)
        {
            if (v[i].find(input[j]) != string::npos)
            {
                time += i+3;
            }
        }
    }

    cout << time;
}