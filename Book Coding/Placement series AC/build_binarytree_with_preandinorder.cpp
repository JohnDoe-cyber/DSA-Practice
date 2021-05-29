#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class Node{
    public:
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[], int start, int end, int curr){
    for (int i=0; i<=end; i++){
        if (inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

Node* BuildTree(int preorder[], int inorder[], int start, int end){
    static int idx = 0;

    if (start>end){
        return NULL;
    }


    int curr = preorder[idx];
    idx++;

    Node* node = new Node(curr);

    if (start==end){
        return node;
    }


    int pos = search(inorder, start, end, curr);
    node->left = BuildTree(preorder, inorder, start, pos-1);
    node->right = BuildTree(preorder, inorder, pos+1, end);

    return node;
}


void inOrderPrint(Node* root){
    if (root == NULL){
        return;
    }
    inOrderPrint(root->left);
    cout << root->data << " ";
    inOrderPrint(root->right);
}


int main(){
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    Node* root = BuildTree(preorder, inorder, 0, 4);
    inOrderPrint(root);

    return 0;
}
