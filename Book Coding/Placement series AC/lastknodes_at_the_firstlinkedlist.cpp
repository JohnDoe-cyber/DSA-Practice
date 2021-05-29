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



void ShiftNodes(Node* &head, int size){

    int length_list = 0;
    Node* temp1 = head;
    while (temp1->next != NULL){
        temp1 = temp1->next;
        length_list++;
    }
    // temp1's next should go to start

    int till_go = length_list - size;
    int counter = 0;
    Node* temp2 = head;
    while (counter < till_go){
        temp2 = temp2->next;
        counter++;
    }

    Node* temp1_start = temp2->next;
    temp2->next = NULL;
    printList(head);
    printList(temp1_start);

    Node* temp1_actual_start = temp1_start;
    while (temp1_start->next != NULL){
        temp1_start = temp1_start->next;
    }
    temp1_start->next = head;

    printList(temp1_actual_start);



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

    ShiftNodes(head, 3);
    // printList(head);



    return 0;
}
