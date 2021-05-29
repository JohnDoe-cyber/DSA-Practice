#include <iostream>
#include <bits/stdc++.h>
using namespace std;


float median(vector<int> arr1, vector<int> arr2){
    vector<int> arr3 = {};

    int i = 0;
    int j = 0;
    int tot = arr1.size() + arr2.size();
    while (arr3.size() != tot){
        if (i>=arr1.size() && j<arr2.size()){
            arr3.push_back(arr2[j]);
            j++;
        }else if (i<arr1.size() && j>=arr2.size()){
            arr3.push_back(arr1[i]);
            i++;
        }
        else{
            if (arr1[i]<=arr2[j]){
                // cout << "hey ";
                arr3.push_back(arr1[i]);
                i++;
            }else if (arr1[i]>arr2[j]){
                // cout << "hey ";
                arr3.push_back(arr2[j]);
                j++;
            }
        }
        // cout << arr3.size();
        // for (int i=0; i<arr3.size(); i++ ){
        //     cout << arr3[i];
        // }
    }
    // for (int i=0; i<arr3.size(); i++ ){
    //     cout << arr3[i]<<endl;
    // }

    float median;
    if (tot%2 == 0){
        median = (arr3[tot/2] + arr3[tot/2 - 1])/2;
    }else{
        median = arr3[tot/2];
    }


    return median;
}


int main(){
    // vector<int> arr1 = {-5, 3, 6, 12, 15};
    // vector<int> arr2 = {-12, -10, -6, -3, 4, 10};

    vector<int> arr1 = {2, 3, 5, 8};
    vector<int> arr2 = {10, 12, 14, 16, 18, 20};

    cout << median(arr1, arr2);
    return 0;
}
