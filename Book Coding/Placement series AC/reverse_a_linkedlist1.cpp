
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


void reverseList(Node* &head){
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;

    while (nextptr != NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;
    }
}








int main(){
    
    return 0;
}


