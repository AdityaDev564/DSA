#include <bits/stdc++.h>
using namespace std;
#define ll long long

int sum(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    int ans = sum(arr + 1, size - 1);
    return ans + arr[0];
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sum(arr, n) << endl;
    return 0;
}