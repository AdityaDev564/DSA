#include <bits/stdc++.h>
using namespace std;
#define ll long long

void rotateby90(vector<vector<int>> &matrix, int n)
{
    // code here

    // Transpose
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Column Reverse
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[start++][i], matrix[end--][i]);
        }
    }
}

int main()
{

    return 0;
}