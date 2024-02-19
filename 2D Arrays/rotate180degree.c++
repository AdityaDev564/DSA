#include <bits/stdc++.h>
using namespace std;
#define ll long long

void rotate180degree(vector<vector<int>> &matrix)
{
    // Code here
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[start][i], matrix[end][i]);
            start++, end--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int start = 0, end = n - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }
}

void printMatrix(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {{3, 4, 7, 18},
                                  {2, 8, 3, 9},
                                  {5, 4, 2, 2},
                                  {1, 2, 3, 4}};

    printMatrix(matrix);

    rotate180degree(matrix);

    cout << endl;

    printMatrix(matrix);

    return 0;
}