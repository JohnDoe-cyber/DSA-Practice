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



int Diameter(Node* root, int* height){
    if (root==NULL){
        return 0;
    }
    int left_height = 0;
    int right_height = 0;

    // cout << "heryyy "<< left_height <<endl;

    int left_diameter = Diameter(root->left, &left_height);
    int right_diameter = Diameter(root->right, &right_height);

    int current_diameter = left_height + right_height + 1;
    *height = max(left_height, right_height) + 1;

    // cout << root->data << endl;
    cout <<  root->data <<   " "<< current_diameter << endl;

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

    int height = 0;
    cout << Diameter(root, &height)<<endl;
    // cout << Diameter(root->left, &height)<<endl;
    // cout << Diameter(root->right, &height)<<endl;

    return 0;
}