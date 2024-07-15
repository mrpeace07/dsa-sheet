#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;

    public:
    void enqueue(int x){

s1.push(x);

    }

    int dequeue(){
        if(s1.empty() && s2.empty()) {
            cout << " queue is empty";
            return -1;
        } 
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int val = s2.top();
        s2.pop();
        return val;

        /* 
        if(s1.empty(){
        return -1;

        int x = s1.top();
        s1.pop();
        if(s1.empty()){
        return x;
        }
        int item = dequeue();
        s.push(x);
        return item;
        })
         
        
        */

    }

    bool isempty(){
if(s1.empty() && s2.empty()) return true;
else return false;

    }


};

int32_t main(){
    Queue q;
    q.enqueue(2);
    q.enqueue(23);
    q.enqueue(12);
    q.enqueue(21);

    
    cout << q.dequeue()<< " ";
    
    cout <<  q.dequeue() ;
}