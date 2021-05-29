#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Parent1{
    public:
    string animal = "DOGE";
    string start = "DOGE";
};


class Parent2{
    public:
    string animal = "Coin";
    string end = "Coin";
};

class Child : public Parent1, public Parent2{
    public:
    Child(){
        cout << "Hey this is the child class"<<endl;
    }
};


int main(){
    Child c;


    // cout << c.animal;    // ambiguous
    cout << c.start;    
    cout << c.end;    


    return 0;
}


