/*
You are climbing a staircase. It takes n steps to reach the top.
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Recursive Solution
int climbStairs(int n)
{
    if (n <= 2)
        return n;
    return climbStairs(n - 1) + climbStairs(n - 2);
}

// Using Memoization
int climbStairs(int n, vector<int> &dp)
{
    if (n <= 2)
        return n;

    if (dp[n] != -1)
        return dp[n];
    return dp[n] = climbStairs(n - 1, dp) + climbStairs(n - 2, dp);
}

int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << climbStairs(n, dp);
    return 0;
}