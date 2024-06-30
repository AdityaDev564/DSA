/*
*****
****
***
**
*
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;
    print(n);
    return 0;
}