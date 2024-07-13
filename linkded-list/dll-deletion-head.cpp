#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;

    node(int data1,node* next1, node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    node(int data1){
        data=data1;
        next = NULL;
        prev = NULL;
    }
};

node* cv(vector<int> &arr){
    node* head = new node(arr[0]);
    node* current = head;

    for(int i=1; i<arr.size(); i++){
        node* temp = new node(arr[i], NULL, current);
        current->next = temp;
        current = temp; 
    }
    return head;
}

node* dh( node* head){
if (head == NULL || head->next == NULL) return NULL;

    node* temp = head;
    head = head-> next;
    head->prev = NULL;
    temp->next = NULL;
    free(temp);

    return head;
}

int main(){
    vector<int> arr={ 2,4,1,5};
    node* head = cv(arr);
     head = dh(head);

    node* temp = head;

    while (temp)
    {
        /* code */cout<< temp-> data << " ";
        temp = temp-> next;
    }
    
}