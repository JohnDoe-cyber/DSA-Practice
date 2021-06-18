#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maxInArray(vector<int> arr){
    int maxxx = arr[0];
    for (int i=1; i< arr.size(); i++){
        if (arr[i]>maxxx){
            maxxx = arr[i];
        }
    }
    return maxxx;
}



vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> return_array = {};
    int in =0;

    while (in<nums.size()){
        int si = 0;
        vector<int> small_array = {};
        while (si<k){
            small_array.push_back(nums[in]);
            in++;
            si++;
        }
        return_array.push_back(maxInArray(small_array));
    }

    return return_array;

}


void printarray(vector <int> v){
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}


int main(){
    // vector<int> nums = {1};
    // printarray(maxSlidingWindow(nums, 1));

    // cout << "\n";

    vector<int> nums1 = {1,-1};
    printarray(maxSlidingWindow(nums1, 1));

    cout << "\n";


    // vector<int> nums2 = {9,11};
    // printarray(maxSlidingWindow(nums2, 2));

    // cout << "\n";


    // vector<int> nums3 = {4,-2};
    // printarray(maxSlidingWindow(nums3, 1));

    // cout << "\n";


    return 0;
}