#include <bits/stdc++.h>
using namespace std;
#define ll long long

void lowerCaseToUpperCase(string &s, int index)
{
    // base case
    if (index == -1)
        return;

    s[index] = toupper(s[index]);
    lowerCaseToUpperCase(s, index - 1);
}

int main()
{
    string s = "aditya";
    cout << s << endl;
    lowerCaseToUpperCase(s, s.length() - 1);
    cout << s << endl;
    return 0;
}