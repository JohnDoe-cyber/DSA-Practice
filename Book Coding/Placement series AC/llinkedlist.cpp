#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val){   // head access with reference

    Node* n = new Node(val);

    if (head == NULL){
        head = n;
        return;
    }

    Node *temp= head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}

void printList(Node* head){       //with value
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout << "NULL";
    cout << endl;
}

void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    if (head==NULL){
        head = n;
        return;
    }
    
    n->next = head;
    head = n;

}

bool isInList(Node* head, int key){

    // Node *keynode = new Node(key);
    bool truefalse = 0;
    while (head != NULL){
        if (key == head->data){
            truefalse =  1;
        }
        head = head->next;
    }
    return truefalse;
}




int main(){
    
    Node* head = NULL;
    insertAtHead(head, 5);

    insertAtTail(head, 2);
    insertAtTail(head, 12);
    insertAtTail(head, 3);
    insertAtTail(head, 56);

    insertAtHead(head, 6);
    printList(head);

    cout << isInList(head, 2)<<endl;
    cout << isInList(head, 112)<<endl;



    return 0;
}
