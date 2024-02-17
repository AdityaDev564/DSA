#include <iostream>
using namespace std;

int main()
{
    // Assuming a 3x3 array for demonstration
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols] = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9}};

    // Initialize maxElement with the first element of the array
    int maxElement = matrix[0][0];

    // Traverse through the 2D array to find the largest element
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            if (matrix[i][j] > maxElement)
            {
                maxElement = matrix[i][j];
            }
        }
    }

    // Print the largest element
    cout << "The largest element in the 2D array is: " << maxElement << endl;

    return 0;
}
