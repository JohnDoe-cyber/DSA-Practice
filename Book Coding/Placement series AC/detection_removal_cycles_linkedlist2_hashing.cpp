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





bool detectCycle(Node* &head){
    unordered_map<Node*, int> node_map;
    Node* last = NULL;
    while(head!=NULL){
        if (node_map.find(head) == node_map.end()){
            node_map[head]++;
            last = head;
            head = head->next;
        }else{
            return true;
        }
    }
    return false;
}


void removeCycle(Node* &head){
    unordered_map<Node*, int> node_map;
    Node* last = NULL;
    while(head!=NULL){
        if (node_map.find(head) == node_map.end()){
            node_map[head]++;
            last = head;
            head = head->next;
        }else{
            last->next = NULL;
            break;
        }
    } 
}










void printList(Node* head){
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}




int main(){
    Node* head = new Node(50);
    head->next = head;
    head->next = new Node(20);
    head->next->next = new Node(15);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(10);

    head->next->next->next->next->next = head->next->next;
    // printList(head);
    cout<< "IS there a cycle " << detectCycle(head) << "\n";
    removeCycle(head);


    printf("Linked List after removing loop \n");
    printList(head);
    return 0;
}