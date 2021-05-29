#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    class Node* left;
    class Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


int countBT(Node* root){

    if (root==NULL){
        return 0;
    }
    return countBT(root->left) + countBT(root->right) + 1;
}









int main(){
    int something = 1;
    Node* root = new Node(something);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    cout << countBT(root);

    return 0;
}


