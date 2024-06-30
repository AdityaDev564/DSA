/*
01. Write a program to print the following pattern:
****
****
****
****

*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // star pattern
    int n;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}