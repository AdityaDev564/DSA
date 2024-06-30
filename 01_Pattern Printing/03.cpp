/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
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
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    n = 5;
    print(n);
    return 0;
}