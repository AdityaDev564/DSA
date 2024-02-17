/*You are given a string s consisting of lowercase English letters. A duplicate removal consists of choosing two adjacent and equal letters and removing them.

We repeatedly make duplicate removals on s until we no longer can.

Return the final string after all such duplicate removals have been made. It can be proven that the answer is unique.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

string removeDuplicates(string s)
{
    string ans;
    ans.push_back(s[0]);

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == ans.back())
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main()
{
    string s = "abbaca";
    cout << removeDuplicates(s);
    return 0;
}