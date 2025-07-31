#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    queue<int> queue_int;
    
    for(int temp : arr)
    {
        if(queue_int.empty() || queue_int.back() != temp)
            queue_int.push(temp);
    }
    
    while(!queue_int.empty())
    {
        int temp = queue_int.front();
        answer.push_back(temp);
        queue_int.pop();
    }

    return answer;
}