#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool targetSum(vector<int> &arr, int index, int n, int target)
{
    // base case
    if (target == 0)
        return 1;

    if (index == n || target < 0)
        return 0;

    return targetSum(arr, index + 1, n, target) || targetSum(arr, index + 1, n, target - arr[index]);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 99;
    cout << targetSum(arr, 0, arr.size(), target) << endl;

    return 0;
}