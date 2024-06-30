/*
Min Cost Climbing Stairs
You are given an integer array cost where cost[i] is the cost of ith step on a staircase. Once you pay the cost, you can either climb one or two steps.
You can either start from the step with index 0, or the step with index 1.
Return the minimum cost to reach the top of the floor.
Input: cost = [10,15,20]
Output: 15
Explanation: You will start at index 1. Pay 15 and climb two steps to reach the top. The total cost is 15.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int minCost(vector<int> &cost, int n, vector<int> &dp)
{
    if (dp[n] != -1)
        return dp[n];
    if (n <= 1)
        return dp[n] = 0;
    if (n == 2)
        return dp[n] = min(cost[0], cost[1]);

    return dp[n] = min((minCost(cost, n - 1, dp) + cost[n - 1]),
                       (minCost(cost, n - 2, dp) + cost[n - 2]));
}
int minCostClimbingStairs(vector<int> &cost)
{
    int n = cost.size();
    vector<int> dp(n + 1, -1);
    return minCost(cost, n, dp);
}

int main()
{

    return 0;
}