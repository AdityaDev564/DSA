#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxSubrraySum(vector<int> &arr)
{
    int n = arr.size();
    int sum = 0;
    int maxSum = arr[0];
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > maxSum)
            maxSum = sum;
        if (sum < 0)
            sum = 0;
    }
    return maxSum;
}
int main()
{

    return 0;
}