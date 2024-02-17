// Reverse a stack using Recursion

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void insertAtBottom(stack<int> &s, int element)
{
    // base case
    if (s.empty())
    {
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();

    // recursive call
    insertAtBottom(s, element);
    s.push(num);
}

void reverseStack(stack<int> &stack)
{
    // base case
    if (stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);
    insertAtBottom(stack, num);
}

int main()
{

    return 0;
}