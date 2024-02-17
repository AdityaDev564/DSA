#include <bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    // Write your code here.
    int sum = 0;
    int sum1 = 0;
    int mul = 1;
    int mul1 = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        a[i] *= mul;
        sum += a[i];
        mul *= 10;
    }
    for (int i = m - 1; i >= 0; i--)
    {
        b[i] *= mul1;
        sum1 += b[i];
        mul1 *= 10;
    }
    int ansSum = sum + sum1;
    vector<int> ans;
    int num;
    while (ansSum != 0)
    {
        num = ansSum % 10;
        ans.push_back(num);
        ansSum = ansSum / 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> a = {4, 5, 1};
    vector<int> b = {3, 4, 5};
    vector<int> ans = findArraySum(a, 3, b, 3);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}