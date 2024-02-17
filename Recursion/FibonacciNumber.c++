// Leetcode 509: Fibonacci Number

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}