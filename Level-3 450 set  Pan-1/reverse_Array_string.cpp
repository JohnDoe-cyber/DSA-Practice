#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void reverseString(vector<char>& s) {
    // for (int i=0; i<ceil((sizeof(s)/sizeof(s[0]))/2); i++){
    //     swap(s[i], s[sizeof(s)/sizeof(s[0])-1 -i]);
    // }
    // for (int i=sizeof(s)/sizeof(s[0]); i>0; i--){
    //     cout<<s[i]<<endl;
    // }
    int initial = 0;
    int last = s.size() -1;
    while (initial <last){
        swap(s[initial], s[last]);
        initial++;
        last--;
    }
}


int main(){
    // reverseString(["h","e","l","l","o"]);
    return 0;
}
