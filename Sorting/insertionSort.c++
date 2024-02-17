#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> & arr, int n){
    for(int i=1;i<n;i++){
        int j = i-1;
        int temp = arr[i];
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    vector<int> a = {3, 5, 2, 1, 7, 8, 0};
    insertionSort(a, a.size());
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;   
}