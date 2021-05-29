#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Complex {
    int real, img;
    Complex(){}
    public:
    Complex(int real_s, int img_s){
        real =  real_s;
        img = img_s;
    }

    Complex operator + (Complex const& a){
        Complex comp1;
        comp1.real = real + a.real;     // current real and the object real
        comp1.img = img + a.img;
        return comp1;
    }

    Complex operator * (Complex const& a){   // taking the object by reference.
        Complex comp1;
        comp1.real = real * a.real - img * a.img;
        comp1.img = img * real + real * a.img;
        return comp1;
    }

    void display(){
        cout << real<< " + " << img <<"i" <<endl;
    }
};




int main(){
    Complex c1(12,3), c2(4, 7);
    Complex c3 = c1 + c2;
    Complex c4 = c1 * c2;

    c3.display();
    c4.display();

    return 0;
}
