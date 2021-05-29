#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

void printarray(vector <int> v){
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
}

bool descfunc(int x, int y){
    return x>y;
}


// 🔥

int main(){
    
    vector <int> v = {12, 4, 3, 9, 60, 34};
    sort(v.begin(),v.end());
    
    printarray(v);
    
    cout << endl;
    cout << binary_search(v.begin(),v.end(), 3)<<endl;



    // We can perform arithmetic operation in iterators in constant time

    // first occurence of an element    (in logn time)
    vector <int>::iterator it = lower_bound(v.begin(),v.end(), 34); // next element greater than 34
    vector <int>::iterator it2 = upper_bound(v.begin(),v.end(), 34);  // next element strictly greater than 34


    // so the number of occurrence can be found by sorting an unsorted element and then taking the difference of upper and lower bound. clever 
    // 😎

    cout << *it << " " << *it2 << endl;



    vector <int> s  = {12, 4, 3, 9, 60, 34};
    sort(s.begin(),s.end(), descfunc);
    printarray(s);
    // vector <int>::iterator ite;
    // for (ite=s.begin(); ite<s.end(); ite++){
    //     cout << *ite << " ";
    // }


    return 0; 
}
