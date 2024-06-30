#include <bits/stdc++.h>
using namespace std;
#define ll long long

void permute(vector<int> &nums, vector<vector<int>> &ans, int index)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    vector<bool> use(21, 0);
    for (int i = index; i < nums.size(); i++)
    {
        if (use[nums[i] + 10] == 0)
        {
            swap(nums[index], nums[i]);
            permute(nums, ans, index + 1);
            swap(nums[index], nums[i]);
            use[nums[i] + 10] = 1;
        }
    }
}

int main()
{
    vector<int> nums = {1, 1, 2};
    vector<vector<int>> ans;
    permute(nums, ans, 0);
    // printing ans
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}