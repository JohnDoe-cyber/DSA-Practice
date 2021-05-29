#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL; 
    }
};

Node* insertBST(Node *root, int val){
    if (root == NULL){
        return new Node(val);
    }
    if (val<root->data){
        root->left = insertBST(root->left, val);
    }
    if (val>root->data){
        root->right = insertBST(root->right, val);
    }
    return root;
}


void inorder(Node *root){
    if (root == NULL){
        return ;
    }
    inorder(root->left);
    cout << root->data<< endl;
    inorder(root->right);

}

Node* searchBST(Node *root, int key){
    if (root == NULL){
        return NULL;
    }
    if (root->data == key){
        return root;
    }
    if (root->data > key){
        searchBST(root->left, key);
    }
    return searchBST(root->right, key);
}


int main(){
    Node *root = NULL;
    root = insertBST(root, 5);
    // insertBST(root, 1);
    // insertBST(root, 3);
    // insertBST(root, 4);
    // insertBST(root, 2);
    // insertBST(root, 7);
    
    insertBST(root, 10);
    insertBST(root, 21);
    insertBST(root, 1);
    insertBST(root, 23);
    insertBST(root, 3);
    insertBST(root, 7);

    if (searchBST(root, 21) == NULL){
        cout << "Does not exist \n";
    }else{
        cout << "Exist\n";
    }

    if (searchBST(root, 2) == NULL){
        cout << "Does not exist";
    }else{
        cout << "Exist";
    }

    return 0;
}