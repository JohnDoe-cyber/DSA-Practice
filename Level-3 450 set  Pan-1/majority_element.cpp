#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;



int majorityElement(int a[], int size){
    unordered_map<int, int> num_list;
    for (int i=0; i<size; i++){
        num_list[a[i]] += 1;
    }

    int is_thegame = 0;
    int element_yes = 0;
    for(auto i : num_list){
        if (i.second > size/2){
            is_thegame = 1;
            element_yes = i.first;
            break
        }
    }
    if (is_thegame == 0){
        return -1;
    }
    else{
        return element_yes;
    }

}



int main(){
    
    return 0;
}
