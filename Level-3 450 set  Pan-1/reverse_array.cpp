#include <iostream>
#include <string.h>
#include <stdio.h>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;


// string reverseWord(string str){
//     string reversed = "";
//     for(int i; i<str.length()+1; i++){
//         reversed += str[str.length() - i];
//     };
//     return reversed;
//   //Your code here
// }



// string reverseWord(string str){
//     // cout << str.substr();

//     std::stringstream ss(str);
//     string word;

//     vector<string> main_array;
//     while (ss >> word){
//         main_array.push_back(word);
//     };

//     for (int i=0; i<main_array.size(); i++){
//         cout<<"main array -> "<<main_array[i];
//     }
//     cout << endl;

//     for (int i=main_array.size()-1; i>=0; i--){
//         cout<<"main array -> "<<main_array[i];
//     }
//     cout << endl;


//     string reversed = "";
//     // for(int i; i<str.length()+1; i++){
//     //     reversed += str[str.length() - i];
//     // };
//     return reversed;
//   //Your code here
// }



string reverseWord(string str){

    for(int i=0; i<floor(str.size()/2); i++){
        swap(str[i], str[str.size() - 1 - i]);
    }

    return str;
}


int main(){
    cout<<reverseWord("ABCDEF89u98u98h")<<endl;


    return 0;
}