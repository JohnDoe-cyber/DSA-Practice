
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void func(string str){
    unordered_map<string, int>  hashy = {};

    for (int i=0; i<str.size(); i++){
        if (hashy.find(str.substr(i,1)) == hashy.end()){
            hashy[str.substr(i,1)] = 1;
        }else {
            hashy[str.substr(i,1)] += 1;
        }
    }

    for (auto x : hashy){
        if (x.second > 1){
            cout << x.first << " " << x.second << endl;
        }
    }

}




int main(){
    func("test string");
    return 0;
}