#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r){
    int pivot = arr[r];
    int i = l-1;

    for(int j=l; j<r; j++){
        if (arr[j]<pivot){
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i+1, r);
    return i+1;

}


int quicksort(int arr[], int l, int r){
    if (l<r){
        int par = partition(arr, l, r);
        quicksort(arr, l, par);
        quicksort(arr, par+1, r);
    }
}





int main(){
    int arr[] = {1,4,8,423,23,4,2,34, 7};
    int l = 0;
    int r = sizeof(arr)/sizeof(arr[0]);

    // vector<int> sp = vector<int>(arr.begin(), arr.begin()+arr.size()/2);
    // cout<<sp[3];

    // printarray(arr);
    quicksort(arr, l, r);
    // printarray(aoem);
    return 0;
}



