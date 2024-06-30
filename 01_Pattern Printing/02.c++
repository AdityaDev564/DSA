/*
Print the pattern
*
**
***
****
*****
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        print(n);
    }
    return 0;
}