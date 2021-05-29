#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int findSubarray(vector<int> arr, int n ) {
    unordered_map<int, int> sumSet;

    // with element zero 
    int sum_to_find = 0;

    int res = 0;
    int sum_current = 0;

    for(int i=0; i<n; i++){
        sum_current += arr[i];
        if (sum_current == sum_to_find){    
            res++;
        }

        if (sumSet.find(sum_current - sum_to_find) != sumSet.end()){
            res += (sumSet[sum_current - sum_to_find]);
        }

        sumSet[sum_current]++;
    }

    return res;

}




int main(){
    vector<int> arr = {6,-1,-3,4,-2,2,4,6,-12,-7};
    vector<int> arr2 = {0,0,5,5,0,0};

    cout << findSubarray(arr, 10);
    cout << findSubarray(arr2, 6);

    return 0;
}
