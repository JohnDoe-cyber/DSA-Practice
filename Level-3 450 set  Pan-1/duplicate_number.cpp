#include <iostream>
#include <bits/stdc++.h>
using namespace std;





/// First Sorting the Array
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(vector<int> arr, int size){
    int i;
    for (i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition (vector<int> &arr, int low, int high){
    int n = 8;

    int pivot = arr[high]; 
    int i = (low - 1); 
    for (int j = low; j <= high - 1; j++){
        if (arr[j] < pivot)
        {
            i++; 
            // cout << "inside i "<<i;
            swap(&arr[i], &arr[j]);
            // cout << "inside ";
            // printArray(arr, n);

        }
    }
    swap(&arr[i + 1], &arr[high]);
    // printArray(arr, n);

    return (i + 1);
}

vector<int> quickSort(vector<int> &arr, int low, int high){
    if (low < high){
        int pi = partition(arr, low, high);
        // cout<<"first half ";
        arr = quickSort(arr, low, pi - 1);
        // cout<<"second half";
        arr = quickSort(arr, pi + 1, high);
    }
    // printArray(arr, arr.size());
    return arr;
}




/// Actual COde for the problem

int BinarySearchExceptOnePosition(vector<int> arr, int element, int exceptposition){
    int low = 0;
    int high = arr.size() - 1;

    int got_a_duplicate = 0;

    while (low<=high){
        int mid = floor((low+high)/2);
        if (mid == exceptposition){
            //pass
            mid += 1;
            break;
            // cout<<"hey";
        }
        else{
            if (element < arr[mid]){
                high = mid - 1;
            }
            else if (element >arr[mid]){
                low = mid + 1;
            }else{
                got_a_duplicate = 1;
                break;
                // return mid;
            }
            // cout<<"mid "<<mid<<endl;
        }
    }
    // cout<<endl;
    return got_a_duplicate;
}

int findDuplicate(vector<int>& nums){
    int duplicate_value;

    nums = quickSort(nums, 0, nums.size()-1);

    for (int i=0; i<nums.size(); i++){
        int isduplicate =  BinarySearchExceptOnePosition(nums, nums[i], i);
        if (isduplicate == 1){
            duplicate_value = nums[i];
        }
    }
    return duplicate_value;
}





int main(){
    // vector<int> arr = {3,1,1,4,2};
    vector<int> arr = {1,3,4,2,2};
    arr = quickSort(arr, 0, arr.size()-1);
    // for (int i=0; i<arr.size(); i++){
    //     cout<<arr[i]; 
    // }
    // printArray(arr, arr.size());

    // cout<<endl;
    cout << findDuplicate(arr)<<endl;
    return 0;
}