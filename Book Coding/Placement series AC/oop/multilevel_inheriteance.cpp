#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Parent1{
    public:
    string start = "DOGE";
};


class Child1 : public Parent1{
    public:
    string end = "Coin";
};

class Child2 : public Child1{
    public:
    Child2(){
        cout << "Hey this is the child2 class"<<endl;
    }
};


int main(){
    Child2 c;


    // cout << c.animal;    // ambiguous
    cout << c.start;    
    cout << c.end;    


    return 0;
}


