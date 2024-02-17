#include <bits/stdc++.h>
using namespace std;
#define ll long long

int printCounting(int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout << n << " ";
    printCounting(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    printCounting(n);
    return 0;
}