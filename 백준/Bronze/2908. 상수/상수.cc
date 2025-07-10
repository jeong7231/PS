#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int ra = stoi(a);
    int rb = stoi(b);

    if(ra>rb)
        cout<<ra;
    else
        cout<<rb;
}