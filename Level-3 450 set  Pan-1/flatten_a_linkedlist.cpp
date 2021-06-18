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


int HlengthList(Node* Node)
{
    int har = 0;
    while (Node != NULL) {
        // printf("%d ", Node->data);
        Node = Node->next;
        har++;
    }
    return har;
}





Node* flatten(Node* &root){
    int hlength = HlengthList(root);
    Node* central_root = root;
    Node* main_root = root;
    while (root != NULL){
        if (root->next==NULL){
            break;
        }
        while (root->bottom!=NULL){
            // cout<<"\nhlength" << hlength<< '\n';

            Node *pseudo_root = root;

            // cout << "\nstart \n\n";


            // printList(pseudo_root);
            // printList(root);
            // printListBottom(root);


            int botm = pseudo_root->bottom->data;

            int num = 1;
            while (pseudo_root->next->data <= botm){
                // while (pseudo_root->next!=NULL){
                    pseudo_root = pseudo_root->next;
                    num++;
                    // cout << "count" << num << '\n';
                    if (num==hlength){
                        break;
                    }
                // }
                // break;
            }
            // num++;
            if (num==hlength){
                // Node *TEMP = pseudo_root->next;
                Node* pseudo_rootnext_frombot = new Node(botm);
                pseudo_root->next = pseudo_rootnext_frombot;
                // pseudo_rootnext_frombot->next = TEMP;
                hlength++;
            }else{
                Node *TEMP = pseudo_root->next;
                Node* pseudo_rootnext_frombot = new Node(botm);
                pseudo_root->next = pseudo_rootnext_frombot;
                pseudo_rootnext_frombot->next = TEMP;
                hlength++;
            }
            

            Node *sss = root->bottom;
            root->bottom = root->bottom->bottom;
            delete sss;

            // printList(pseudo_root);
            // printList(root);
            // printListBottom(root);

            pseudo_root = root;
            // cout << "hsbdfhbl " << root->bottom->bottom->data <<"\n";

        }
        hlength--;
        // cout << "root" << root->data << endl;
        main_root = main_root->next;
        root = main_root;

        // cout << root->data;
        // root = pseudo_root->next;
    }
    return central_root;
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

    // printList(root);
    // printListBottom(root);



    // Flatten the list
    root = flatten(root);


    // Print the flatened linked list
    cout << "\n After flatten \n";
    // printListBottom(root);
    printList(root);


    return 0;
}

