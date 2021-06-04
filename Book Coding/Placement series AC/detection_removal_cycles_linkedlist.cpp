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
    Node *slow = head;
    Node *fast= head;

    while (fast!=NULL && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow){
            return true;
        }
    }
}

////// wrongn according to the gfg !!!!!!!
// void removeCycle(Node* &head){
//     Node* slow = head;
//     Node* fast = head;

//     do {
//         slow = slow->next;
//         fast = fast->next->next;
//     }while(slow!=fast);

//     fast = head;
//     while (slow->next != fast->next){
//         slow= slow->next;
//         fast=fast->next;
//     }
//     slow->next = NULL; 
// }

void removeCycle(Node* &head){

    Node* slow = head;
    Node* fast = head;

    if (head == NULL || head->next == NULL)
        return;

    slow = slow->next;
    fast = fast->next->next;

    while (fast && fast->next) {
        if (slow == fast)
            break;
        slow = slow->next;
        fast = fast->next->next;
    }

    if (slow == fast)
    {
        slow = head;
            
            if(slow == fast) {
                while(fast->next != slow) fast = fast->next;
        }
            else {
            while (slow->next != fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
        }
        fast->next = NULL; 
    }
}


int main(){
    
    return 0;
}