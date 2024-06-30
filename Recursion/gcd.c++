#include <bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b)
{
    // base case
    if (b == 0)
        return a;

    // recursive call
    return gcd(b, a % b);
}

int main()
{
    cout << gcd(10, 15) << endl;
    cout << gcd(48, 18) << endl;
    return 0;
}