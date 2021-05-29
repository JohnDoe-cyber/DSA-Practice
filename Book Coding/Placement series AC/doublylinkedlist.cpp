#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val){
        data = val;
        prev = NULL;
        next = NULL;
    }
};


void insertAtTail(Node* &head, int val){
    Node *new_node = new Node(val);
    if (head == NULL){
        head = new_node;
        return ;
    }
    Node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
}

void insertAtHead(Node* &head, int val){
    Node *new_node = new Node(val);
    // cout << new_node->data<<"new ";
    if (head == NULL){
        head = new_node;
        return;
    }
    Node* temp = head;
    temp->prev = new_node;
    new_node->next = temp;
    head = new_node;
}


void deleteAtIndex(Node* &head, int indexy){
    int index = 0;
    Node* temp = head;
    
    if (head == NULL){
        cout << "Its empty brother!"<<endl;
    }
    
    while (temp->next != NULL && index<indexy){
        temp = temp->next;
        index++;
    }    


    if (index == 0){
        temp = temp->next;
        delete temp;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL){
        temp->next->prev = temp->prev;
    }
    delete temp;


}



void printList(Node* head){       //with value
    while(head != NULL){
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout << "NULL";
    cout << endl;
}








int main(){
    Node *head = NULL;
    // Node *head = new Node(3);
    printList(head);

    insertAtHead(head, 5);
    insertAtTail(head, 2);
    insertAtTail(head, 12);
    insertAtTail(head, 3);
    insertAtTail(head, 56);

    insertAtHead(head, 6);
    printList(head);


    /// Deleting at index 2
    deleteAtIndex(head, 2);
    printList(head);


    
    return 0;
}


