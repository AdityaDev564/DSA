#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool linearSearch(int arr[], int size, int key)
{
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool ans = linearSearch(arr + 1, size - 1, key);
        return ans;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (linearSearch(arr, n, 16))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}