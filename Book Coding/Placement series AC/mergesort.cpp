#include <iostream>
#include <bits/stdc++.h>
using namespace std;



void printarray(vector <int> v){
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout<< "\n";
}


vector<int> merge(vector<int> arr1, vector<int> arr2){
    int minn = std::min(arr1.size(),arr2.size());

    vector<int> thevector = {};

    int i = 0;
    int j = 0;

    while (i<arr1.size() or j<arr2.size()){
        if (i>=arr1.size()){
            thevector.push_back(arr2[j]);
            j++;
        }else if (j>=arr2.size()){
            thevector.push_back(arr1[i]);
            i++;
        }else{
            if (arr2[j] < arr1[i]){
                thevector.push_back(arr2[j]);
                j++;
            }else{
                thevector.push_back(arr1[i]);
                i++;
            }
        }
    }
    // printarray(thevector);
    
    return thevector;
}

vector<int> mergesort(vector<int> arr, int l,  int r){
    
    if (l<r){
        int mid = (l+r)/2;
        mergesort(arr, l, mid);
        mergesort(arr, mid+1, r);
        // printarray(vector<int>(arr.begin(), arr.begin()+mid));
        printarray(vector<int>(arr.end()-mid-1, arr.end()));

        // arr = merge(vector<int>(arr.begin(), arr.begin()+mid), vector<int>(arr.begin()+mid+1, arr.end()));
    }
    // printarray(arr);
    
    return arr;
}


int main(){
    vector <int> arr = {1,4,8,423,23,4,2,34, 7};
    int l = 0;
    int r = arr.size();

    // vector<int> sp = vector<int>(arr.begin(), arr.begin()+arr.size()/2);
    // cout<<sp[3];

    printarray(arr);
    vector <int> aoem = mergesort(arr, l, r);
    printarray(aoem);


    return 0;
}