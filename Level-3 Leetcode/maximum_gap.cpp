#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maximumGap(vector<int>& nums) {
    if (nums.size()<2){
        return 0;
    }
    int max_man = 0;
    sort(nums.begin(),nums.end());
    for (int i=0; i<nums.size()-1; i++){
        int a = nums[i];
        int b = nums[i+1];
        int compute = b-a;
        if (compute>max_man){
            max_man = compute;
        }
    }
    // cout << "max_man " << max_man << '\n';
    return max_man;
}



int main(){
    vector<int> vec = {3,6,9,1};
    cout << maximumGap(vec);

    vector<int> vec2 = {10};
    cout << maximumGap(vec2);


    return 0;
}