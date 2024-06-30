#include <bits/stdc++.h>
using namespace std;

void reverseString(string &s, int start, int end)
{
    // base case
    if (start >= end)
        return;

    swap(s[start], s[end]);
    reverseString(s, start + 1, end - 1);
}

int main()
{
    string s = "Aditya";
    cout << s << endl;
    reverseString(s, 0, s.length() - 1);
    cout << s << endl;

    return 0;
}