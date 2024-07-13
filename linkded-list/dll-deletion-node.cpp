

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;

    node( int data1, node* next1, node* prev1){
        data= data1;
        next = next1;
        prev = prev1;
    }

    node( int data1){
        data= data1;
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

void dn( node* temp){
    node* back = temp->prev;
    node* front = temp-> next;

    if( front == NULL){
        back-> next = NULL;
        temp-> prev= NULL;
        delete temp;
        return;
    }

    back->next = front;
    front-> prev= back;

    temp->next =  temp->prev = NULL;
    delete temp;

}
int main(){
    vector<int> arr={ 2,4,1,5};
    node* head = cv(arr);
    dn(head->next);

    node* temp = head;

    while (temp)
    {
        /* code */cout<< temp-> data << " ";
        temp = temp-> next;
    }
    
}