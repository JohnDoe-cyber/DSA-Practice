#include <iostream>
#include <bits/stdc++.h>
using namespace std;


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


int isBalanced(Node* root, int* height){
    if (root == NULL){
        return 1;
    }
    int left_height = 0;
    int right_height = 0;

    // int left_bal = isBalanced(root->left, &left_height);
    // int right_bal = isBalanced(root->right, &right_height);

    int left_bal = isBalanced(root->left, &left_height);
    int right_bal = isBalanced(root->right, &right_height);
    *height = max(left_height, right_height) + 1;
    
    if (left_bal == 0 || right_bal== 0){
        return 0;
    }

    if (abs(left_height - right_height)<=1){
        return 1;
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

    int height = 0;
    cout << isBalanced(root, &height);


    return 0;
}