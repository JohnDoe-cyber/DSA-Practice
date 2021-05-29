#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define n 5


class Stack{
    int* arr; 
    int top;

    public:
    Stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if (top == n-1){
            cout << "Stack Overflow"<<endl;
            return;
        }

        top++;
        arr[top] = x;

    }

    void pop(){
        if (top < 0){
            cout << "Stack Overflow"<<endl;
            return;
        }
        cout << "Popped element is : "<<arr[top]<<endl;
        top--;
    }

    void peek(){
        if (top<0){
            cout << "Its empty Madam/sir"<<endl;
            return;
        }
        cout << arr[top]<<endl;
    }

    void isEmpty(){
        if (top==0){
            cout << "Yes its empty"<<endl;
            return;
        }
        cout << "Its not empty"<<endl;
    }

    void printStack(){
        if (top==0){
            cout << "Its empty"<<endl;
            return;
        }
        for (int i=0; i<top; i++){
            cout << arr[i]<<" ";
        }
        cout<<endl;
    }

};



int main(){
    Stack stump;
    stump.push(1);
    stump.push(2);
    stump.push(6);
    stump.push(3);
    stump.push(3);
    stump.push(3);
    stump.push(3);


    stump.printStack();
    stump.isEmpty();
    stump.peek();
    stump.pop();
    stump.printStack();

    return 0;
}