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




void insertAtTail(Node* &head, int val){
    Node* n = new Node(val);
    if (head == NULL){
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}


void reverseList(Node* &head){
    Node* prev = NULL;
    Node* current = head;
    Node* nexty = head->next;

    while (current != NULL){
        if(current->next == NULL){
            current->next = prev;
            prev = current;
            current = nexty;
        }else{
            current->next = prev;
            prev = current;
            current = nexty;
            nexty = nexty->next;
        }
    }
    head = prev;
}



void printList(Node* head){
    if (head == NULL){
        cout << "The linked list is empty \n";
    }
    Node* temp = head;
    while (head!=NULL){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL \n";
    

}


int main(){
    Node* head = NULL;
    insertAtTail(head, 3);
    insertAtTail(head, 12);
    insertAtTail(head, 3);
    insertAtTail(head, 56);
    insertAtTail(head, 2);
    insertAtTail(head, 323);
    insertAtTail(head, 156);
    printList(head);
    reverseList(head);
    printList(head);



    return 0;
}