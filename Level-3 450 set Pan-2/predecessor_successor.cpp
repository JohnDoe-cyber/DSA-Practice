#include <iostream>
#include <bits/stdc++.h>
using namespace std;


struct Node {
    int key;
    struct Node *left, *right;
};




void findPreSuc(Node* root, Node*& pre, Node*& suc, int key){
    // Your code goes here
    // int pre = -1;
    // int suc = -1;

    if (root==NULL){
        return;
    }
    while (root!=NULL){
        if (root->key == key) {
            if (root->right) {
                suc = root->right;
                while (suc->left)
                    suc = suc->left;
            }
            if (root->left) {
                pre = root->left;
                while (pre->right)
                    pre = pre->right;
            }
            return;
        }
        else if (key > root->key){
            pre = root;
            root = root->right;
        }else{
            suc = root;
            root = root->left;
        }
    }
    cout << pre->key << " " << suc->key<<endl;

}


// A utility function to create a new BST node
Node* newNode(int item)
{
    Node* temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// A utility function to insert
// a new node with given key in BST
Node* insert(Node* node, int key)
{
    if (node == NULL)
        return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}


int main()
{
    int key = 65; // Key to be searched in BST

    /* Let us create following BST
                50
                /  \
            /    \
            30     70
            / \     / \
            /   \   /   \
        20   40 60   80
*/
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    Node *pre = NULL, *suc = NULL;

    findPreSuc(root, pre, suc, key);
    findPreSuc(root, pre, suc, 100);

    // if (pre != NULL){
    //     cout << "Predecessor is " << pre->key << endl;
    // }
    // else{
    //     cout << "-1";
    // }

    // if (suc != NULL)
    //     cout << "Successor is " << suc->key;
    // else
    //     cout << "-1";
    return 0;
}