/*
Given an array arr of non-negative integers and an integer sum, the task is to count all subsets of the given array with a sum equal to a given sum.

Note: Answer can be very large, so, output answer modulo 109+7
This will give TLE for large inputs. So, we need to optimize it using DP.

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int subset(int arr[], int index, int sum, int n)
{
    if (index == n)
        return sum == 0;

    long long ans = subset(arr, index + 1, sum, n);
    ans += subset(arr, index + 1, sum - arr[index], n);
    ans %= 1000000007;
    return ans;
}

int perfectSum(int arr[], int n, int sum)
{
    // Your code goes here
    return subset(arr, 0, sum, n);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;
    cout << perfectSum(arr, n, sum) << endl;
    return 0;
}