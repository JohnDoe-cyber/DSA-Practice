#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v = {12, 4, 3, 9, 60, 34};
    // vector <int>::iterator it = lower_bound(v.begin(),v.end(), 34); // next element greater than 34

    // can use the following instead of the above shit
    auto it = lower_bound(v.begin(),v.end(), 34); // next element greater than 34
    cout << *it << endl;


    for (int x: v){
        cout << x<< ' ';
    }

    cout << endl;

    for (int &x: v){
        x++;
        cout << x<< ' ';
    }

    return 0;
}
