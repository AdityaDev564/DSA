#include <bits/stdc++.h>
using namespace std;
#define ll long long

void transpose(int matrix[][5], int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = row + 1; col < cols; col++)
        {
            swap(matrix[row][col], matrix[col][row]);
        }
    }
}

void print(int matrix[][5], int rows, int cols)
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[4][5] = {{3, 4, 7, 18, 3},
                        {2, 8, 3, 9, 2},
                        {5, 4, 2, 2, 6},
                        {1, 2, 3, 4, 5}};
    print(matrix, 4, 5);
    transpose(matrix, 4, 5);
    cout << endl;
    print(matrix, 5, 4);
    return 0;
}