/*
Given an integer array nums of unique elements, return all possible
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void help(vector<int> &nums, int index, int n, vector<vector<int>> &ans, vector<int> temp)
{
    // base case
    if (index == n)
    {
        ans.push_back(temp);
        return;
    }

    // not selected
    help(nums, index + 1, n, ans, temp);

    // selected
    temp.push_back(nums[index]);
    help(nums, index + 1, n, ans, temp);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> temp;
    help(nums, 0, nums.size(), ans, temp);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);
    for (auto v : ans)
    {
        for (auto ele : v)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}