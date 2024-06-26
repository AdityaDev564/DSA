/*
Best Time to Buy and Sell Stock
You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Brute Force
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int max_profit = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            max_profit = max(max_profit, prices[j] - prices[i]);
        }
    }
    return max_profit;
}

// Optimized
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int min_price = INT_MAX;
    int max_profit = 0;
    for (int i = 0; i < n; i++)
    {
        min_price = min(min_price, prices[i]);
        max_profit = max(max_profit, prices[i] - min_price);
    }
    return max_profit;
}

int main()
{

    return 0;
}