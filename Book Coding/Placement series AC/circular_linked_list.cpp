#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next = NULL;
    }
};



void insertAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    Node *temp = head;
    if (head ==NULL){
        new_node->next = new_node;
        head = new_node;
        return;
    }
    while (temp->next != head){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = head;
    head = new_node;
}




void insertAtTail(Node* &head, int val){

    if (head ==NULL){
        insertAtHead(head, val);
        return;
    }

    Node* new_node = new Node(val);
    Node* temp = head;

    while (temp->next != head){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = head;
    
}

void printList(Node* &head){
    Node* temp = head;
    do{
        cout << temp->data<< " -> ";
        temp = temp->next;
    }
    // while(temp != NULL);
    while(temp != head);
    cout << "NULL \n";
}



void deleteAtIndex(Node* &head, int indexy){
    Node* temp = head;
    int count= 0;

    // if (indexy=0){
    //     while(temp->next != head){
    //         temp = temp->next;
    //     }
    //     Node* todelete = head;

    //     temp->next = head->next;
    //     delete todelete;

    // }else{
        while(count< indexy-1){
            temp = temp->next;
            count++;
            cout<<count<<endl;
        }
        // printList(temp);
        Node* todelete = temp->next;
        temp->next = temp->next->next;

        delete todelete;
    // }
}



int main(){
    Node *head = NULL;

    insertAtHead(head, 5);
    insertAtTail(head, 2);
    insertAtTail(head, 12);
    insertAtTail(head, 3);
    insertAtTail(head, 56);

    insertAtHead(head, 6);
    printList(head);


    // Deleting at index 2
    deleteAtIndex(head, 2);
    printList(head);

    return 0;
}