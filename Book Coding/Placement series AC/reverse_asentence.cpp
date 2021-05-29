#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;


void reverseSentence(string s){
    stack<string> stamp;

    for (int i=0; i<s.size(); i++){
        string oneword = "";
        while (s[i] != ' ' && i<s.length()){
            oneword += s[i];
            i++;
        }
        stamp.push(oneword);
    }

    while (!stamp.empty()){
        cout << stamp.top() << " ";
        stamp.pop();
    }
    cout<<endl;
}



int main(){
    string str = "Hey there how are you";
    reverseSentence(str);
    return 0;
}