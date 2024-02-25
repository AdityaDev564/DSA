/*
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int longestPalindrome(string s)
{
    int count[52] = {0}; // 26 for lowercase letters, 26 for uppercase letters

    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i]))
            count[s[i] - 'a']++;
        else
        {
            count[s[i] - 'A' + 26]++;
        }
    }

    int ans = 0;
    int flag = 0;
    for (int i = 0; i < 52; i++)
    {
        if (count[i] % 2 == 0)
        {
            ans += count[i];
        }
        else
        {
            ans += count[i] - 1;
            flag = 1;
        }
    }

    if (flag == 0)
        return ans;
    return ans + 1;
}

int main()
{

    return 0;
}