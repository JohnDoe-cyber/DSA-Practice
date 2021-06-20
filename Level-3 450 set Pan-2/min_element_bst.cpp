
#include <iostream>
#include <bits/stdc++.h>
using namespace std;





int minValue(Node* root){
    // Code here
    int mini = root->data;
    while(root->left){
        root = root->left;
        mini = root->data;
    }
    return mini;
}


int main(){
    
    return 0;
}