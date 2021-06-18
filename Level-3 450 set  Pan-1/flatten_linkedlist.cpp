#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* bottom;

    Node(int val){
        data = val;
        next = NULL;
        bottom = NULL;
    }
};


////////////////////////////////////////////////////////////////
// Code for the drivers starts
////////////////////////////////////////////////////////////////



// Create and push new nodes
void push(Node* &head_ref, int new_data)
{
    if (head_ref == NULL){
        Node* new_node = new Node(new_data);
        head_ref = new_node;
    }else{
        Node* karma = head_ref;
        // Node* new_node = (Node*)malloc(sizeof(Node));
        Node* new_node = new Node(new_data);

        // new_node->next = NULL;
        // new_node->data = new_data;
        // new_node->bottom = head_ref;
        // head_ref = new_node;

        // The above commented code is from gfg

        while (head_ref->bottom!=NULL){
            head_ref = head_ref->bottom;
        }
        head_ref->bottom = new_node;
        head_ref = karma;
    }
    

}

void printListBottom(Node* Node)
{
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->bottom;
    }
    cout << "\n";
}
void printList(Node* Node)
{
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    cout << "\n";
}




////////////////////////////////////////////////////////////////
// Code for the drivers ends
////////////////////////////////////////////////////////////////



Node *merge(Node *a, Node *b)
{
    if(a==NULL) return b;
    if(b== NULL) return a;
    Node *res;
    if(a->data<b->data)
    {
        res=a;
        res->bottom=merge(a->bottom,b);
        return res;  
    }
    else
    { 
        res=b;
        res->bottom=merge(a,b->bottom);
        return res;  
    }
}

Node *flatten(Node *root)
{
    Node *a =root;
    Node  *b=root->next;
    while(b!=NULL)
    {
        Node *c=b->next;
        a=merge(a,b);
        b=c;
        
    }
    return(a);
}



int main(){
    Node* root = NULL;
    // Given Linked List
    push(root, 5);
    push(root, 7);
    push(root, 8);
    push(root, 30);
    push((root->next), 10);
    push((root->next), 20);
    push((root->next->next), 19);
    push((root->next->next), 22);
    push((root->next->next), 50);
    push((root->next->next->next), 28);
    push((root->next->next->next), 35);
    push((root->next->next->next), 40);
    push((root->next->next->next), 45);

    printList(root);
    printListBottom(root);



    // Flatten the list
    root = flatten(root);


    // Print the flatened linked list
    cout << "\n After flatten \n";
    printListBottom(root);
    printList(root);


    return 0;
}
