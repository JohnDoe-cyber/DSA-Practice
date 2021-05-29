#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n){
    map <int, int> freq;

    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    for (auto x: freq){
        cout << x.first << " " << x.second << endl;
    }

}



int main(){
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}