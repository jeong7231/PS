#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    stack<char> stack_char;

    for(char temp : s)
    {
        answer = true;
        if(temp == '(')
            stack_char.push(temp);
        else if(temp == ')')
        {
            if(stack_char.empty()) 
            {
                answer = false;
                break;
            }
            
            else if(!stack_char.empty()) 
                stack_char.pop();
        }
    }
    
    if(!stack_char.empty() || answer == false) 
        answer = false;
        
    else if(stack_char.empty())
        answer = true;
    
    return answer;
}