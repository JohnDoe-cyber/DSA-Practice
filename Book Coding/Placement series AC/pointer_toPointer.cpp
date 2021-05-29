#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
    
    int a = 10;
    int *p = &a;

    cout << *p << endl;

    int **q = &p; 
    cout << *q <<endl;         
    cout << **q <<endl;
    cout << q <<endl;    // q stores address of pointer p at +4 of where p stores address of a


    // cannot do the following

    // int **t = &a; 
    // cout << *t <<endl;         
    // cout << **t <<endl;
    // cout << t <<endl;



    return 0;
}