#include <iostream>
using namespace std;

//  takes us O(N) time on average to visit an element by index

class Node {
    public:
        int value;
        Node* next;
};

// struct node{
//     int data;
//     struct node *next;
// };

// int traverse(head){
    
// }


int main(){

    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // allocating 3 nodes in the "heap"
    one = new Node();
    two = new Node();
    three = new Node();

    // Assigning values 
    one->value = 1;
    two->value = 2;
    three->value = 3;

    //Connect the nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // Print the linked list value
    head = one;

    while (head != NULL){
        printf(" %d ----> ", head->value);
        head = head->next;
    }
    printf(".....\n");

    return 0;
}
