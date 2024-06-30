/*
*****
***
*
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int j = 0; j < 2 * (n - i) - 1; j++)
            cout << "*";

        cout << endl;
    }
}

int main()
{
    print(5);
    return 0;
}