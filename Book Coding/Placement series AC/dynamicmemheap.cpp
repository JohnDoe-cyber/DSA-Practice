#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
    int a = 10;

    int *p = new int();
    *p = 10;

    cout<<&p<<endl;

    cout << endl;

    delete p;
    cout<<*p<<endl;
    cout<<&p<<endl;

    cout << endl;


    p = NULL;
    cout<<&p<<endl;
    cout<<*p<<endl;






    
    return 0;
}

