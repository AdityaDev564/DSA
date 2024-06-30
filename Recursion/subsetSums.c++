/*
Given a list arr of N integers, return sums of all subsets in it.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void helper(vector<int> arr, int n, int index, int sum, vector<int> &ans)
{
    // base case
    if (index == n)
    {
        ans.push_back(sum);
        return;
    }

    helper(arr, n, index + 1, sum, ans);

    helper(arr, n, index + 1, sum + arr[index], ans);
}
vector<int> subsetSums(vector<int> arr, int N)
{
    // Write Your Code here
    vector<int> ans;
    helper(arr, N, 0, 0, ans);
    return ans;
}

int main()
{

    return 0;
}