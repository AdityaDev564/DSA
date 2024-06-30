#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPalindrome(string s, int start, int end)
{
    // base case
    if (start >= end)
        return 1;

    // if not matched
    if (s[start] != s[end])
        return 0;

    // if matched then check for next pair
    return isPalindrome(s, start + 1, end - 1);
}

int main()
{
    string s = "namon";
    cout << isPalindrome(s, 0, s.length() - 1) << endl;
    return 0;
}