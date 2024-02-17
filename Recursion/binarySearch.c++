#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool binarySearch(int arr[], int s, int e, int k)
{
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] == k)
    {
        return true;
    }

    if (arr[mid] > k)
    {
        return binarySearch(arr, s, mid - 1, k);
    }
    else
    {
        return binarySearch(arr, mid + 1, e, k);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (binarySearch(arr, 0, n - 1, 8))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}