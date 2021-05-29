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

// O(n) time complexity

int sumReplacement(Node* root){
    if (root==NULL){
        // cout << root->data;
        // return root->data;
        return 0;
    }
    int left_sumdata = sumReplacement(root->left);
    int right_sumdata = sumReplacement(root->right);

    cout << root->data + left_sumdata + right_sumdata <<endl;
    // root->data = root->data + root->left->data + root->right->data;
    return root->data + left_sumdata + right_sumdata;
}



void sumReplacement2(Node* root){
    if (root==NULL){
        return;
    }
    sumReplacement2(root->left);
    sumReplacement2(root->right);

    if (root->left != NULL){
        root->data += root->left->data;
    }
    if (root->right != NULL){
        root->data += root->right->data;
    }
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // root->left->left->left = new Node(54);

    // cout << sumReplacement(root);

    preorder(root);
    cout << endl;
    sumReplacement2(root);
    preorder(root);



    return 0;
}