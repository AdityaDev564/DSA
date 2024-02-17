#include<bits/stdc++.h>
using namespace std;
#define ll long long

void transposeMatrix(vector<vector<int>> &matrix){
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
}

void rotate90degree(vector<vector<int>> &matrix){
    transposeMatrix(matrix);
    int n = matrix.size();
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

void printMatrix(vector<vector<int>> &matrix){
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<vector<int>> matrix = {{3, 4, 7, 18},
                                  {2, 8, 3, 9},
                                  {5, 4, 2, 2},
                                  {1, 2, 3, 4}};
    printMatrix(matrix);

    rotate90degree(matrix);

    cout<<endl;

    printMatrix(matrix);

    return 0;
}