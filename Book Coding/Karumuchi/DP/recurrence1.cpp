#include <iostream>
#include <bits/stdc++.h>
using namespace std;


//recursive method
int func(int n){
    int sum = 0;
    if (n==0 || n==1){
        return 2;
    }
    for (int i=1; i<n; i++){
        sum += 2*func(i)*func(i-1);
    }
    return sum;
}


//iterative method
int func2(int x){
    int T[x];
    T[0] = T[1] = 2;
    T[2] = 2*T[0]*T[1];
    for (int i=3; i<x; i++){
        T[i] = T[i-1] + 2*T[i-1]*T[i-2];
    }
    return T[x];
}

int main(){
    // cout<<func(30);
    cout<<func2(30);
    return 0;
}
