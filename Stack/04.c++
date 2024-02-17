// Copy stack -> in same order

#include <bits/stdc++.h>
using namespace std;
#define ll long long

stack<int> copyStack(stack<int> &input)
{
    stack<int> temp;
    while (!input.empty())
    {
        temp.push(input.top());
        input.pop();
    }
    stack<int> ans;
    while (!temp.empty())
    {
        ans.push(temp.top());
        temp.pop();
    }
    return ans;
}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    stack<int> ans = copyStack(s);
    while (!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }
    return 0;
}