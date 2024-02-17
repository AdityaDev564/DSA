// Delete middle element from stack

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void deleteMiddle(stack<int> &inputStack, int N)
{

    // Write your code here
    stack<int> temp;
    for (int i = 0; i <= N / 2; i++)
    {
        int curr = inputStack.top();
        inputStack.pop();
        temp.push(curr);
    }
    temp.pop();
    for (int i = 0; i < N / 2; i++)
    {
        int curr = temp.top();
        temp.pop();
        inputStack.push(curr);
    }
}

void print(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    print(s);
    deleteMiddle(s, 4);
    print(s);
    return 0;
}