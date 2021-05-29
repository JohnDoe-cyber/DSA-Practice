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



Node* reverseList(Node* &head, int size){
    Node* prev = NULL;
    Node* current = head;
    Node* nexty = NULL;
    int index = 0;

    if (head == NULL){
        return NULL;
    }

    while (index < size && current!=NULL){
        nexty = current->next;
        current->next = prev;
        prev = current;
        current = nexty;
        index++;
    }
    if (nexty != NULL){
        head->next = reverseList(nexty, size);
    }
    // printList(prev);
    return prev;
    
}






int main(){
    Node* head = NULL;
    insertAtTail(head, 3);
    insertAtTail(head, 12);
    insertAtTail(head, 13);
    insertAtTail(head, 56);
    insertAtTail(head, 2);
    insertAtTail(head, 323);
    insertAtTail(head, 156);
    printList(head);
    head = reverseList(head, 1);
    printList(head);



    return 0;
}