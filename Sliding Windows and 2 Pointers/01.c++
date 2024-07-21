/*
Maximum points you can obtain from cards
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long maxScore(vector<int> &cardPoints, int n, int k)
{
    long long lsum = 0, rsum = 0, maxSum = 0;

    // Calculate the initial left sum of the first k cards
    for (int i = 0; i < k; i++)
        lsum += cardPoints[i];

    maxSum = lsum;
    int rindex = n - 1;

    // Start removing from left and adding from right
    for (int i = k - 1; i >= 0; i--)
    {
        lsum -= cardPoints[i];
        rsum += cardPoints[rindex];
        rindex--;

        maxSum = max(maxSum, lsum + rsum);
    }

    return maxSum;
}

int main()
{

    return 0;
}