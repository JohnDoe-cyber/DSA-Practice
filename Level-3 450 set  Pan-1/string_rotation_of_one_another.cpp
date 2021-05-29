#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isrot(string s1, string s2){
    bool what = false;

    if (s1.length() != s2.length()){
        what = false;
    }

    string s3 = "";
    for (int i=1; i<s1.size()+1; i++){
        s3.append(s1.substr(s1.size() - i, 1));
        // cout<< s1.substr(s1.size() - i, 1)<<endl;
        // cout<<i << " " <<s3<<endl;

        // string stirngy = s1.substr(1);
        // cout<<stirngy;
    }
    // cout<<s1.size();
    // cout<<"heyy "<<s3;
    if (s3 == s2){
        what =  true;
    }
    return what;
}


int main(){
    string str1 = "AACD", str2 = "CDAA";
    cout << isrot(str1, str2);
    return 0;
}
