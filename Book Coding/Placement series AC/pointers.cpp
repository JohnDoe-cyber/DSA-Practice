#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int *aptr;
    aptr = &a;

    // Accessing the "a" with pointer

    cout << aptr << endl;    // address of a stored in aptr
    cout << a << endl;      // value of a
    cout << &a << endl;       // address of a
    cout << *aptr << endl;       //value of a accessed by aptr pointer 
    cout << &aptr << endl;       //address pf aptr pointer 

    cout<<endl;
    

    // modifying the "a" with pointer
    
    *aptr = 20;            // changing the value of a with pointer
    cout <<a << endl;    

    // &aptr = 987987;              this ofcourse throws error
    // cout <<a << endl;    
    cout << aptr << endl;       //address pf aptr pointer 


    aptr++;
    cout << aptr << endl;       //address pf aptr pointer 


    return 0;
}