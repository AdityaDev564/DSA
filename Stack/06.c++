// Reverse a string using stack

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    stack<char> s;
    string str = "Aditya";
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    string ans = "";
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << ans << endl;
    return 0;
}