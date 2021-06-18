#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int ptr1 = 0;
    int ptr2 = 0;
    // int ptr3 = 0;
    
    vector<int> merged_array;
    if (m==0){
        nums1 = nums2;
        return nums1;
    }else if(n == 0){
        nums1 = nums1;
        return nums1;
    }

    int i = 0;
    while (ptr1<m && ptr2<n){
        if (nums1[ptr1] < nums2[ptr2] ){
            merged_array.push_back(nums1[ptr1]);
            ptr1+=1;
        }else{
            merged_array.push_back(nums2[ptr2]);
            ptr2+=1;
        }
        i++;
    }


    while( ptr2<n){
        merged_array.push_back(nums2[ptr2]);
        ptr2+=1;
    }
    while(ptr1<m){
        merged_array.push_back(nums1[ptr1]);
        ptr1+=1;
    }
    nums1 = merged_array;
    
    return nums1;
}




int main(){
    vector<int> a = {4,0,0,0,0,0};
    vector<int> b = {1,2,3,5,6};
    vector<int> nums1;
    nums1 = merge(a, 1, b, 5);
    for (int i=0; i<nums1.size(); i++){
        cout << nums1[i] << " ";
    }
    cout << " \n";


    vector<int> a2 = {1};
    vector<int> b2 = {};

    int x = 1, y = 0;
    vector<int> nums2;
    nums2 = merge(a2, x, b2, y);
    
    for (int i=0; i<nums2.size(); i++){
        cout << nums2[i] << " ";
    }
    cout << " \n";

    return 0;
}