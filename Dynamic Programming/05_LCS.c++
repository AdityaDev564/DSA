/*
Given two strings str1 & str 2 of length n & m respectively, return the length of their longest common subsequence. If there is no common subsequence then, return 0.

A subsequence is a sequence that can be derived from the given string by deleting some or no elements without changing the order of the remaining elements. For example, "abe" is a subsequence of "abcde".
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Using Recursion
int lcs(string s1, string s2, int n, int m)
{
    if (n == 0 || m == 0)
        return 0;
    if (s1[n - 1] == s2[m - 1])
        return 1 + lcs(s1, s2, n - 1, m - 1);
    else
        return max(lcs(s1, s2, n - 1, m), lcs(s1, s2, n, m - 1));
}

// Using Memoization
int lcs(string s1, string s2, int n, int m, vector<vector<int>> &dp)
{
    if (n == 0 || m == 0)
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];
    if (s1[n - 1] == s2[m - 1])
        return dp[n][m] = 1 + lcs(s1, s2, n - 1, m - 1, dp);
    else
        return dp[n][m] = max(lcs(s1, s2, n - 1, m, dp), lcs(s1, s2, n, m - 1, dp));
}

int lcs(int n, int m, string s1, string s2)
{
    int dp[n + 1][m + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (s1[i - 1] == s2[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[n][m];
}

int main()
{

    return 0;
}