// Maximum consecutive 1's in binary array

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int maxConsecutiveOnes(int arr[], int n)
{
    int count = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            ans = max(ans, count);
        }

        else
            count = 0;
    }
    return ans;
}

int main()
{
    int arr[] = {1, 1, 1, 1};
    int n = 4;
    cout << maxConsecutiveOnes(arr, n) << endl;
    return 0;
}