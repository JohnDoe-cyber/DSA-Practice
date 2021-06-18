#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;   //used to shorten the datatype
typedef vector<pair<int, int>> vpi;

#define MAX_NAME_LENGTH 60    /// these are what are macros in cpp.

// A macro means that certain string in the code will; be changed before the compilation.
#define PB push_back
#define MP make_pair
#define F first
#define S second

#define REP(i,a,b) for(int i=a; i<=b; i++)



int main(){
    // cout<<"Hey this is DGK!\n";


    // // Taking two inputs 
    // int a, b;
    // scanf("%d %d", &a, &b);
    // cout << a << " " << b  << "\n"; 

    // // Getting the whole line  (Remember this doesn't work if the above is not commented i.e. If scanf or cin is before it.)
    // cout << "Enter your name : \n";
    // string s;
    // getline(cin, s);
    // cout << "Hello " << s << "\n";

    


    // // COmparing two numbers without '=='
    // int x1 = 10;
    // int x2 = 10;
    // if (abs(x1-x2) < 1e-9) {
    // // a and b are equal
    // cout<< "Yes the two numbers are equal";
    // }

    int x1 = 1;
    int y1 = 1;
    int x2 = 2;
    int y2 = 4;

    vpi some;
    some.PB(MP(y1, x1));
    some.PB(MP(y2, x2));

    cout << some[0].first << " -> " << some[0].second << "\n";
    cout << some[1].first << " -> " << some[1].second << "\n";


    // REP(i,1,20){
    //     cout << i <<" - ";
    // }





    int a2 = 546;
    string b2 = "Wtf";
    // printf("%d %d \n", a, b);   //throws error

    // g++ -o xyz abc.cpp
    // ./xyz


    // That's it

    return 0;
}
