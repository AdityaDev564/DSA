/*
Given a matrix of size n x m, where every row and column is sorted in increasing order, and a number x. Find whether element x is present in the matrix or not.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool search(vector<vector<int>> matrix, int n, int m, int x)
{
    // code here
    int i = 0, j = m - 1;
    while (i < n && j >= 0)
    {
        if (matrix[i][j] == x)
            return 1;
        else if (matrix[i][j] < x)
            i++;
        else
            j--;
    }
    return 0;
}

int main()
{

    return 0;
}