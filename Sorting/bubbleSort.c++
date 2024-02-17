#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n)
{   
    for(int i = 1;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
}


int main()
{
    vector<int> a = {3, 5, 2, 1, 7, 8, 0};
    bubbleSort(a, a.size());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}