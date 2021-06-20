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

// 4 2 5 1 6 3 7

// void inorder(Node* root){         // by value 
//     if (root == NULL){
//         return;
//     }
//     inorder(root->left);
//     cout << root->data <<" ";
//     inorder(root->right);
// }


// vector<int> levelOrder(Node* node){
//     //Your code here
//     vector<int> soe;
//     if (node == NULL){
//         //
//     } 
//     while (node->left->data != NULL && node->right->data != NULL){

//     }
    
// }


vector<int> printLevelOrder(Node *root){
    vector<int> su = {};
    queue<Node*> soe;

    // if (root == NULL) return;
    // queue<Node *> q;
    soe.push(root);

    while (soe.empty() == false){
        int nodeCount = soe.size();

        while (nodeCount > 0){
            Node *node = soe.front();
            // cout << node->data << " ";
            su.push_back(node->data);
            soe.pop();
            if (node->left != NULL)
                soe.push(node->left);
            if (node->right != NULL)
                soe.push(node->right);
            nodeCount--;
        }
        // cout << endl;
    }
    return su;
}


void printarray(vector <int> v){
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout<< "\n";
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> ro = printLevelOrder(root);
    printarray(ro);
    return 0;
}


