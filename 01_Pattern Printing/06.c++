/*
1 2 3
1 2
1
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print(int n)
{
    for (int i = n; i > 0; i--)
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
    print(5);
    return 0;
}