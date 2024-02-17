// Using STL stack

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        cout << s.top() << " ";
        s.pop();
        cout << s.empty() << " ";
    }
    return 0;
}