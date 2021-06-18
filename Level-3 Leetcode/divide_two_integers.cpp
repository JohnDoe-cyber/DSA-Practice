#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int divide(double dividend, double divisor) {
    string return_string;
    int unexpected_return = pow(2, 31)-1;
    if (divisor==0){
        // cout << "Screw it";
        return -1;
    }
    if ((pow(-2, 31)<=dividend<=(pow(2, 31)-1)) && (pow(-2, 31)<=divisor<=(pow(2, 31)-1))){
        double x = dividend/divisor;
        // cout << "x " << x << "\n";
        string soe = to_string(x);
        // cout << "soe " << soe << "\n";

        size_t sss = soe.find('.');
        if (sss != string::npos){
            return_string = soe.substr(0,sss);
        }
        else{
            return_string = soe;
        }   
        // cout << "string " << return_string << endl;
        double return_double = stof(return_string);
        // cout << "return_double " << return_double << endl;


        return return_double;
    }else{
        return unexpected_return;
    }
    
}


int main(){
    // cout << divide(10, 3) << "\n";
    // cout << divide(7, -3) << "\n";
    // cout << divide(0, 1) << "\n";
    // cout << divide(-2147483648, -1) << "\n";
    // cout << divide(1, 0) << "\n";

    // declare variables
    int a = 12, b = 25;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;
    cout << "a >> 1 = " << (a >> 1) << endl;


    return 0;
}