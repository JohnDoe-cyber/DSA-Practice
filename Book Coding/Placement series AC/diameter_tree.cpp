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


int Height(Node* root){
    if (root==NULL){
        return 0;
    }
    return max(Height(root->left), Height(root->right)) + 1;
}


int Diameter(Node* root){
    if (root==NULL){
        return 0;
    }
    int left_height = Height(root->left);
    int right_height = Height(root->right);

    int current_diameter = left_height + right_height + 1;
    int left_diameter = Diameter(root->left);
    int right_diameter = Diameter(root->right);

    return max(current_diameter, max(left_diameter, right_diameter));
}



int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->left->left = new Node(54);

    cout << Diameter(root)<<endl;
    cout << Diameter(root->left)<<endl;
    cout << Diameter(root->right)<<endl;

    return 0;
}