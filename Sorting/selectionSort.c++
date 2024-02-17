#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> & arr, int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;

        for(int j= i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    vector<int> a = {4, 5, 3, 5, 2};
    int n = 5;
    a.push_back(0);
    n++;
    selectionSort(a, n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}