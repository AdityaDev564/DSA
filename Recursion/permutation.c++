#include <bits/stdc++.h>
using namespace std;
#define ll long long

// void helper(vector<int> nums, vector<int> &temp, vector<bool> &visited)
// {
//     if (visited.size() == temp.size())
//     {
//         for (auto i : temp)
//             cout << i << " ";
//         cout << endl;
//     }
//     for (int i = 0; i < visited.size(); i++)
//     {
//         if (visited[i] == 0)
//         {
//             visited[i] = 1;
//             temp.push_back(nums[i]);

//             helper(nums, temp, visited);
//             visited[i] = 0;
//             temp.pop_back();
//         }
//     }
// }

void helper(vector<int> &nums, vector<vector<int>> &ans, int index)
{
    if (index == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[i], nums[index]);
        helper(nums, ans, index + 1);
        swap(nums[i], nums[index]);
    }
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans;
    helper(nums, ans, 0);
    return 0;
}