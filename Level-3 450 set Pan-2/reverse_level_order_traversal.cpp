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


void printarrayNode(vector <Node*> v){
    for (int i=0; i<v.size(); i++){
        cout << v[i]->data << " ";
    }
    cout<< "\n";
}




vector<int> reverseLevelOrder(Node *root){
    // Using two vectors
    vector<Node*> v1 = {};
    vector<Node*> v2 = {root};

    // int soe=INT_MAX;

    int terabel = 1;
    Node* dp_index = v2[0];
    int while_iter = 0;

    while (dp_index!=v2[0] || while_iter==0){

        // cout << "Moon light!!! \n";

        vector<Node*> temp; 
        temp = v2;
        v2 = v1;
        v1 = temp;

        // printarrayNode(v2);
        // printarrayNode(v1);

        // cout << (v1[1] && v1[1]->left!= NULL) <<endl;
        // cout <<terabel<< "terabel"<<endl;

        dp_index = v1[0];
        // cout << v2[0]->data <<"##"<<endl;

        int sokku = terabel;
        int min_teraform = terabel;
        for (int i=0; i<min_teraform; i++){
            // cout << "i am ghost" <<i <<endl;;
            if (v1[i] && v1[i]->left!= NULL){
                v2.push_back(v1[i]->left);
                terabel++;
            }
            if (v1[i] && v1[i]->right!= NULL){
                v2.push_back(v1[i]->right);
                terabel++;
            }
        }

        
        terabel = terabel - sokku;
        // cout <<terabel<< "terabel"<<endl;


        // printarrayNode(v2);
        v2.insert(v2.end(), v1.begin(), v1.end());
        v1.clear();

        // cout << "! \n";

        while_iter++;

    }

    // delete v1;
    // delete v2;
    // delete temp;


    vector<int> result_array = {};
    for (int i=0; i<v2.size(); i++){
        result_array.push_back(v2[i]->data);
    }
    return result_array;
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

    vector<int> ro = reverseLevelOrder(root);
    printarray(ro);
    return 0;
}


