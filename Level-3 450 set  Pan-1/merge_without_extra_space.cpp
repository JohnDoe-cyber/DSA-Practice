#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int mergey(int arr1[], int arr2[], int n, int m) {
    // code here
    int big_size = n+m;
    int kkk[big_size];
    int min_bet = std::min(n,m);
    
    int i = 0;
    int j = 0;
    int kkk_index = 0;
    while (kkk_index != big_size){
    // for (int i=0; i<max_bet; i++){
        if (i<n && j<m){
            if (arr2[j]< arr1[i]){
                kkk[kkk_index] = arr2[j];
                j++;
                kkk_index++;
            }else{
                kkk[kkk_index] = arr1[i];
                i++;
                kkk_index++;
            }
        }
        else if (i>=n && j<m){
            kkk[kkk_index] = arr2[j];
            j++;
            kkk_index++;
        }
        else if (i<n && j>=m){
            kkk[kkk_index] = arr1[i];
            i++;
            kkk_index++;
        }
        else{
            //pass
        }
        // for (int i=0; i<big_size; i++){
        //     cout<<kkk[i]<<endl;
        // }
    }
    
    for (int i=0; i<n; i++){
        arr1[i] = kkk[i];
    }
    for (int i=0; i<m; i++){
        arr2[i] = kkk[n+i];
    }

    // for (int i=0; i<big_size; i++){
    //     cout<<kkk[i]<<endl;
    // }

    for (int i=0; i<n; i++){
        cout<<arr1[i]<<endl;
    }

    for (int i=0; i<m; i++){
        cout<<arr2[i]<<endl;
    }

    return 0;
}


int main(){
    int arr[4] = {1, 3, 5, 7};
    int arr2[5] = {0, 2, 6, 8, 9};
    mergey(arr, arr2, 4, 5);


    return 0;
}
