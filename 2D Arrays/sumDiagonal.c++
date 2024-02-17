#include <bits/stdc++.h>
using namespace std;
#define ll long long

int firstDiagonal(int matrix[][4], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += matrix[i][i];
    }
    return sum;
}

int secondDiagonal(int matrix[][4], int rows, int cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += matrix[i][rows - i - 1];
    }
    return sum;
}

int main()
{
    int matrix[4][4] = {{3, 4, 7, 18},
                        {2, 8, 3, 9},
                        {5, 4, 2, 2},
                        {7, 3, 0, 8}};
    cout << "The sum of First Diagonal is: " << firstDiagonal(matrix, 4, 4) << endl;
    cout << "The sum of Second Diagonal is: " << secondDiagonal(matrix, 4, 4) << endl;
    return 0;
}