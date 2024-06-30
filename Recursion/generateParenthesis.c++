/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void helper(int n, int l, int r, vector<string> &ans, string &temp)
{
    // base case
    if (l == n && r == n)
    {
        ans.push_back(temp);
        return;
    }

    if (l <= n)
    {
        temp.push_back('(');
        helper(n, l + 1, r, ans, temp);
        temp.pop_back();
    }
    if (r < l)
    {
        temp.push_back(')');
        helper(n, l, r + 1, ans, temp);
        temp.pop_back();
    }
}

vector<string> generateParenthesis(int n)
{
    vector<string> ans;
    string temp;
    helper(n, 0, 0, ans, temp);
    return ans;
}

int main()
{

    return 0;
}