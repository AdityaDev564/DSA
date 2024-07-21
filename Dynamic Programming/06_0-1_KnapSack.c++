#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Using recursion
int knapSack(int w, vector<int> wt, vector<int> val, int n)
{
    if (n == 0 || w == 0)
        return 0;
    if (wt[n - 1] > w)
        return knapSack(w, wt, val, n - 1);
    else
        return max(val[n - 1] + knapSack(w - wt[n - 1], wt, val, n - 1), knapSack(w, wt, val, n - 1));
}

// Using Memoization
int knapSack(int w, vector<int> wt, vector<int> val, int n, vector<vector<int>> &dp)
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (wt[n - 1] > w)
        return dp[n][w] = knapSack(w, wt, val, n - 1, dp);
    else
        return dp[n][w] = max(val[n - 1] + knapSack(w - wt[n - 1], wt, val, n - 1, dp), knapSack(w, wt, val, n - 1, dp));
}

// Tabulation
int knapSack(int w, vector<int> wt, vector<int> val, int n)
{
    int dp[n + 1][w + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (wt[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
        }
    }
    return dp[n][w];
}

int main()
{

    return 0;
}