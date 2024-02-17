#include <bits/stdc++.h>
using namespace std;
#define ll long long

// int gcd(int a, int b)
// {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }
int gcd(int a, int b)
{
    // if (a == 0)
    // {
    //     return b;
    // }
    // if (b == 0)
    // {
    //     return a;
    // }
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}