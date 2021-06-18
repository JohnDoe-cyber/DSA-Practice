#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue <int> q1;
    queue <int> q2;
    
    public:

    Stack(){
        N=0;
    }

    void pop(){
        if (q1.empty()){
            return ;
        }
        while (q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void push(int val){
        q1.push(val);
        N++;
    }


    void top(){
        if (q1.empty()){
            return;
        }
        while (q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }

        int a = q1.front();
        q2.push(a);
        
        queue <int> temp = q1;
        q1 = q2;
        q2 = temp;

        cout << a;

    }

    //remaining same



};



int main(){
    
    return 0;
}