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


void reverseLevelOrder(Node* root){
    stack <Node *> S;
    queue <Node *> Q;
    Q.push(root);

    while (Q.empty() == false)
    {
        root = Q.front();
        Q.pop();
        S.push(root);

        if (root->right)
            Q.push(root->right); 
        if (root->left)
            Q.push(root->left);
    }

    while (S.empty() == false)
    {
        root = S.top();
        cout << root->data << " ";
        S.pop();
    }
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    reverseLevelOrder(root);
    return 0;
}
