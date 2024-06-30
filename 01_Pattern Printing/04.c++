/*
1
2 2
3 3 3
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
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    n = 3;
    print(n);
    return 0;
}