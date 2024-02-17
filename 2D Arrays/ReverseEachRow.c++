#include <bits/stdc++.h>
using namespace std;
#define ll long long

void reverseEachRow(int matrix[][4], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        int start = 0;
        int end = cols - 1;
        while (start < end)
        {
            swap(matrix[i][start], matrix[i][end]);
            start++;
            end--;
        }
    }
}

void printMatrix(int matrix[][4], int rows, int cols)
{
    cout << "The matrix is: " << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << "[ ";
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << "]" << endl;
    }
}

int main()
{
    int matrix[4][4] = {{3, 4, 7, 18},
                        {2, 8, 3, 9},
                        {5, 4, 2, 2},
                        {7, 3, 0, 8}};
    printMatrix(matrix, 4, 4);
    reverseEachRow(matrix, 4, 4);
    printMatrix(matrix, 4, 4);
    return 0;
}