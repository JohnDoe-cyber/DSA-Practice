#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int findingPivotIndex(vector<int> arr, int size){
    int left =0;
    int right = size - 1;

    while(left < right){
        int mid = floor((left+right)/2);

        if (arr[mid] > arr[right]){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return left;
}



int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    cout << findingPivotIndex(arr, arr.size());

    return 0;
}
