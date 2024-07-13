#include<bits/stdc++.h>
using namespace std;

struct node{
    public:
    int data;
    node* next;

    public:
    node( int data1, node* next1){
        data = data1;
        next= next1;
    }
public:
node(int data1){
    data = data1;
    next = nullptr;
}

};

node* cv(vector<int>& arr){
    node* head = new node(arr[0]);
    node*mover = head;
    for(int i=1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover=temp;
    }
    return head;
}

int length(node*head){
    int count =0;
    node* temp = head;
    while(temp){
        temp = temp->next;
        count ++;
    }
    return count;

}

bool check(node* head,int key){
    node* temp = head;
    while(temp){
        if(temp->data == key){
            return true;
            }
            else
        temp = temp->next;
        
    }
    return false;
}

int main(){
    vector<int> arr= { 2, 3, 5, 6};
    node* head = cv(arr);
    int key;
   cout<< check(head,3);
    }
