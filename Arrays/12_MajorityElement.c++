// Majority Element

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int majorityElement(int arr[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int res = -1;
    for (auto it : mp)
    {
        if (it.second > n / 2)
        {
            res = it.first;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == res)
        {
            return i;
            break;
        }
    }
    return -1;
}

// Moore's Voting Algorithm
int majorityElement(int arr[], int n)
{
    int res = 0, count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
    }
    if (count <= n / 2)
    {
        res = -1;
    }
    return res;
}

int main()
{
    int arr[] = {3, 7, 4, 7, 7, 5};
    int n = 6;
    cout << majorityElement(arr, n) << endl;
    return 0;
}