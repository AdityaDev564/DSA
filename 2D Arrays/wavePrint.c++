#include <bits/stdc++.h>
using namespace std;
#define ll long long

// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector<int> ans;

//     for (int col = 0; col < mCols; col++)
//     {

//         if (col & 1)
//         {
//             // odd Index -> Bottom to top

//             for (int row = nRows - 1; row >= 0; row--)
//             {
//                 ans.push_back(arr[row][col]);
//             }
//         }
//         else
//         {
//             // 0 or even iondex -> top to bottom
//             for (int row = 0; row < nRows; row++)
//             {
//                 ans.push_back(arr[row][col]);
//             }
//         }
//     }
//     return ans;
// }

void wavePrint(int matrix[][5], int rows, int cols)
{
    for (int col = 0; col < cols; col++)
    {
        if (col % 2 == 0)
        {
            // even col -> top to bottom
            for (int row = 0; row < rows; row++)
            {
                cout << matrix[row][col] << " ";
            }
        }
        else
        {
            // odd col -> bottom to top
            for (int row = rows - 1; row >= 0; row--)
            {
                cout << matrix[row][col] << " ";
            }
        }
    }
}

int main()
{
    int matrix[4][5] = {{3, 4, 7, 18, 3},
                        {2, 8, 3, 9, 2},
                        {5, 4, 2, 2, 6},
                        {7, 3, 0, 8, 5}};
    wavePrint(matrix, 4, 5);
    return 0;
}