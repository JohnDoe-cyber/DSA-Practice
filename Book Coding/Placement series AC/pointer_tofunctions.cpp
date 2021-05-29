#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// swapping

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    //call by value
    int x = 5, y = 10;
    swap(x, y);
    cout << x<< " " << y<<endl;


    //call by reference
    int w = 5, z = 10;
    swap2(&w, &z);

    cout << w<< " " << z<<endl;


    return 0;
}