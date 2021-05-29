#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class base{
    public: 

    virtual void print(){
        cout << "This is the base class"<<endl;
    }

    // void print(){
    //     cout << "This is the base class";
    // }
};



class derived: public base{
    public: 
    void print(){
        cout << "This is the derived class"<<endl;
    }
};




int main(){
    base baseptr;
    baseptr.print();

    base *baseptr2;
    derived  d;
    baseptr2 = &d;    // Have no idea of this line
    baseptr2->print();


    return 0;
}

