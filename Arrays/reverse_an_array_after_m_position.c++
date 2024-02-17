/*
Given an array 'arr' of integers and a position 'm', reverse the array after mth position.
*/

#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
    int n = arr.size();
    int j = n-1;
    for(int i = m+1;i<j;i++){
        swap(arr[i], arr[j]);
        j--;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,};
    reverseArray(arr, 3);
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}