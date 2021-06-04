#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


void verticalOrderPrint(Node* root){
    map<int, vector<int>> m;
    int h_dis = 0;    

    if (root == NULL){
        return;
    }

    m[h_dis].push_back(root->data);
    verticalOrderPrint(root->left);
    verticalOrderPrint(root->right);

    map<int, vector<int>> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        for (int i=0; i<(it->second).size(); i++){
            cout << (it->second)[i] << " ";
            cout << (it->second).size() << " ";
        }
        cout << "\n";
    }


}


int main(){
    Node* root = new Node(10);
    root->left = new Node(11);
    root->left->left = new Node(7);
    root->left->right = new Node(23);
    root->right = new Node(9);
    root->right->left = new Node(15);
    root->right->right = new Node(8);


    verticalOrderPrint(root);
    return 0;
}