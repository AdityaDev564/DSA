#include <bits/stdc++.h>
using namespace std;
#define ll long long

int printRowIndexWithMaxSum(int matrix[][4], int rows, int cols)
{
    int maxSum = INT_MIN;
    int maxRowIndex = -1;
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += matrix[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxRowIndex = i;
        }
    }
    return maxRowIndex;
}

int main()
{
    int matrix[5][4] = {{3, 4, 7, 18},
                        {2, 8, 3, 9},
                        {5, 4, 2, 2},
                        {7, 3, 0, 8},
                        {2, 8, 9, 1}};
    cout << "The row index with the maximum sum is: " << printRowIndexWithMaxSum(matrix, 5, 4) << endl;

    return 0;
}