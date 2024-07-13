#include<bits/stdc++.h>
using namespace std;

struct node {
    public:
    int data;
    node* next;

    public:
    node(int data1, node* next1){
        data= data1;
        next = next1;
    }

    public:
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

node* cv(vector<int> &arr){
node* head = new node(arr[0]);
node* mover = head;
for(int i=0; i<arr.size();i++){
    node*temp = new node(arr[1]);
    mover-> next = temp;
    mover = temp;
}
return head;
}

int main(){
    vector<int> arr = {2,5,8,7};
    node* head = cv(arr);
    cout <<head->data;
}