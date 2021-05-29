#include <iostream>
#include <bits/stdc++.h>
using namespace std;


string SayIt(string alpha){
    unordered_map<int, int> hashy = {};
    vector<int> listy = {};
    string return_statement;

    if (alpha == "1"){
        return_statement = "11";
    }else{
        for (int i=0; i< alpha.size(); i++){
            listy.push_back(std::stoi(alpha.substr(i, 1)));
        }
        for (int i=0; i< alpha.size(); i++){
            cout<< listy[i]<<endl;
        }
        // for (int i=0; i<listy.size(); i++){
        for (int i=listy.size()-1; i>=0; i--){
            if (listy[i] == listy[i-1]){
                // cout << listy[i] << " " << listy[i-1] << " " << endl;
                if (hashy.find(listy[i]) == hashy.end()){
                    hashy[listy[i]] = 1;
                }else{
                    hashy[listy[i]] += 1;
                }
            }
            else{
                hashy[listy[i]] = 1;
            }
        }
        for (auto x : hashy){
            cout << x.first << " " << x.second << endl;
        }
        for (auto x : hashy){
            return_statement += to_string(x.second) + to_string(x.first);
        }
}
    return return_statement;
    // for (int i=0; i<hashy.size(); i++){
    //     return_statement = to_string(hashy[i])
    // }
}

string countAndSay(int n){
    string  return_string;

    vector<string> countandsay_arr = {"1"};
    if (n == 1){
        return_string = "1";
    }else{
        // cout << SayIt(countandsay_arr[0]);
        // countandsay_arr.push_back(SayIt(countandsay_arr[0]));
        for (int i=1; i<n; i++){
            string temp = SayIt(countandsay_arr[i-1]);
            // cout << "stringreturn " << temp << endl;
            countandsay_arr.push_back(temp);
        }
        // for (int i=0; i<countandsay_arr.size(); i++){
        //     cout << countandsay_arr[i]<<endl;
        // }
        return_string = countandsay_arr[countandsay_arr.size()-1];
    }
    return return_string;
}


int main(){
    // cout << countAndSay(5);
    cout << SayIt("1211")<<endl;
    return 0;
}