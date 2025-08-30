#include <iostream>
using namespace std;

long long recursive(long long a, long long b, long long c)
{
    if (b == 1)
        return a % c;
    long long half = recursive(a, b / 2, c);
    long long result = (half * half) % c;
    if (b % 2 == 1)
    {
        result = result * a % c;
    }
    return result;
}

int main(void)
{
    long long a, b, c;

    cin >> a >> b >> c;
    cout << recursive(a, b, c);
}