// Maximum length even - odd subarray

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int evenOddSubarray(int arr[], int n)
{
    int res = 1;
    int curr = 1;
    for (int i = 1; i < n; i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) ||
            (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            curr++;
            res = max(res, curr);
        }
        else
        {
            curr = 1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {7, 10, 13, 14};
    int n = 4;
    cout << evenOddSubarray(arr, n) << endl;
    return 0;
}