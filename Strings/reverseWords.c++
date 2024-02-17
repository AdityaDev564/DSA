#include <bits/stdc++.h>
using namespace std;

void reverseWords(vector<char> &s)
{
    int i = 0, N = s.size();
    while (i < N)
    {
        int start = i;
        while (i < N && s[i] != ' ')
            ++i;
        reverse(begin(s) + start, begin(s) + i);
        ++i;
    }
    reverse(begin(s), end(s));
}

int main()
{
    vector<char> v = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};
    reverseWords(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    return 0;
}