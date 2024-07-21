/*
Sort 0 1 2
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// Dutch National Flag Algorithm
void sort012(int arr[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0, 2, 1, 2, 0};
    int n = 5;
    sort012(arr, n);
    printArray(arr, n);
    return 0;
}