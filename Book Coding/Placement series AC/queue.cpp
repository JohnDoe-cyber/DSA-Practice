#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define n 20


class Queue{
    int* arr;
    int front; 
    int back;

    public:
    Queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }
    
    void push(int x){
        if (back == n-1){
            cout << "The Queue is empty"<<endl;
        }
        back++;
        arr[back] = x;
        
        if (front == -1){
            front++;
        }
    }

    void pop(){
        if (front == -1 || front > back){
            cout << "No element in queue"<<endl;
            return;
        }
        // front++;
        back--;
    }

    void peek(){
        if (front == -1 || front > back){
            cout << "No element in queue"<<endl;
            return;
        }
        cout << arr[front]<<endl;
    }

    bool isEmpty(){
        if (front == -1 || front > back){
            return true;
        }
        return false;
    }

    void printQueue(){
        if (front == -1 || front > back){
            cout << "No element in queue"<<endl;
            return;
        }
        for (int i=0; i<2*sizeof(arr)/sizeof(arr[0]);i++){
            cout << arr[i]<< " ";
        }
        cout <<endl;
    }



};


int main(){
    Queue stump;
    stump.push(1);
    stump.push(2);
    stump.push(6);
    stump.push(3);
    stump.printQueue();
    cout << stump.isEmpty()<<endl;
    stump.peek();
    stump.pop();
    stump.push(5);
    stump.printQueue();
    return 0;
}
