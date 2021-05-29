#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// O(n^2) time complexity


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node (int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


int height(Node* root){
    if (root == NULL){
        return 0;
    }
    return max(height(root->left), height(root->right)) + 1;
}


int isBalanced(Node* root){
    if (root ==  NULL){
        return 0;
    }

    int left_height = height(root->left);
    int right_height = height(root->right);
    if (abs(left_height - right_height) <= 1 ){
        return true;
    }
    return 0;

}




int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    // root->left->right = new Node(5);
    // root->right->left = new Node(6);
    // root->right->right = new Node(7);
    root->left->left->left = new Node(54);

    // cout << sumReplacement(root);

    cout << isBalanced(root);


    return 0;
}