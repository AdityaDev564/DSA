/*
Given a set of m distinct positive integers and a value ‘N’. Count the total number of ways we can form ‘N’ by  adding the array elements. Repetitions and different arrangements are allowed.
Note: Answer can be quite large output the answer modulo 109+7.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// All the testcases are not passing, dynamic programming is required
int way(int arr[], int m, int sum)
{
    if (sum == 0)
        return 1;
    if (sum < 0)
        return 0;

    long long ans = 0;
    for (int i = 0; i < m; i++)
    {
        ans += way(arr, m, sum - arr[i]);
    }
    return ans % 1000000007;
}

int main()
{

    return 0;
}