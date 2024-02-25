#include <bits/stdc++.h>
using namespace std;
#define ll long long

string sort(string s)
{
    // complete the function here
    int count[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        count[s[i] - 'a']++;
    }
    string ans = "";
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < count[i]; j++)
        {
            ans += char(i + 'a');
        }
    }
    return ans;
}

int main()
{

    return 0;
}