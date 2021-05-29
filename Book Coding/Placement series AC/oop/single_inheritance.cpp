#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Parent{
    string name;
    public:
    string place;
    string animal = "DOGE";
    private: string thing;

};

class Child : public Parent{
    public:
    Child(){
        cout << "Hey this is the child class"<<endl;
    }
};


int main(){
    Child c;
    // c.name;          // this is inaccessible
    cout << c.place;
    cout << c.animal;
    

    return 0;
}


