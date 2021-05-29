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
            right = mid;
        }
    }
    return left;
}

int index_val_binary_search(vector<int> arr, int size, int target){
    int left =0;
    int right = size - 1;

    int mid_val = -1;
    while(left <= right){
        int mid = floor((left+right)/2);
        // cout<<mid<<endl;
        // cout<<arr[mid]<<endl;
        if (arr[mid] < target){
            left = mid + 1;
        }else if(arr[mid] > target){
            right = mid - 1;
        }else{
            mid_val = mid;
            return mid;
        }
    }
    return -1;
}



int search(vector<int>& nums, int target) {
    int response;

    int pivot_index = findingPivotIndex(nums, nums.size());

    if (nums.size() == 1){
        if (nums[0]== target){
            response = 0;
        }else{
            response = -1;
        }
    }
    else if (nums.size() == 2){
        if (nums[0] == target){
            response = 0;
        }else if(nums[1] == target){
            response = 1;
        }else{
            response = -1;
        }
    }else {

        auto start = nums.begin() + 0;
        auto end = nums.begin() + pivot_index ;
        vector<int> result(pivot_index);
        copy(start, end, result.begin());

        // for (int i = 0; i<result.size(); i++){
        //     cout << result[i]<<endl;
        // }

        // cout<<pivot_index << endl;

        if (pivot_index == 0){
            response = index_val_binary_search(nums, nums.size(), target);
            // cout<<"maxa"<<response<<endl;
            // pass 
        }else{
            auto start2 = nums.begin() + pivot_index;
            auto end2 = nums.end();
            vector<int> result2(nums.size() - pivot_index);
            copy(start2, end2, result2.begin());

            // for (int i = 0; i<result2.size(); i++){
            //     cout << result2[i]<<endl;
            // }


            if (target >= result[0]){
                response = index_val_binary_search(result, result.size(), target);
                // cout<<"heryyy"<<index_val_binary_search(result, result.size(), target);
            }else{
                if (index_val_binary_search(result2, result2.size(), target) == -1){
                    // cout<<"heryyy"<<index_val_binary_search(result2, result2.size(), target);

                    response = -1;
                }else{
                    response = result.size() + index_val_binary_search(result2, result2.size(), target);
                }
            }
        
        }
    }

    return response;
}



int main(){
    // vector<int> erast = {4,5,6,7,0,1,2};
    vector<int> erast = {5, 1, 3};

    cout << search(erast, 5);
    // search([4,5,6,7,0,1,2], 0);
    return 0;
}
