#include <bits/stdc++.h>
using namespace std;
#define ll long long

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    cout << "Enter the number: " << endl;
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}