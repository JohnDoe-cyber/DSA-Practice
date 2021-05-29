#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class student{
    public:
    int age;



    // default constructor
    student(){
        cout<< "the default constructor" << endl;
    }
    
    student(string s){
        cout<< "the parameterized constructor : " << s << endl;
    }
    
    
    
    
    
    void page(){
        cin>>age;
    }

    void page2(string s){
        // cout << "give a message : ";
        cin>>s;
    }


    void printAge(){
        cout << age << endl;
    }
};



int main(){
    student raman("rajesh");
    raman.page2("HI there is nothing to wory about");

    cout << raman.age<<endl;
    raman.page();
    student rn;
    raman.printAge();
    return 0;
}
