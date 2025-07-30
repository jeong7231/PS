 #include <iostream>
 #include <stack>

 using namespace std;

 int main()
 {
    int K;
    cin >> K;

    stack<int> s;

    int input;
    for(int i=0; i<K; i++)
    {
        cin >> input;

        if(input == 0)
            s.pop();
        else   
            s.push(input);
    }

    int sum = 0;
    while(!s.empty())
    {
        sum += s.top();
        s.pop(); 
    }

    cout << sum;

 }