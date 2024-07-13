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

node* it( node* head, int data){

node* newnode = new node(data);
node* temp = head;
while(temp-> next!=NULL){
    temp= temp->next;
}
newnode->next = temp;
newnode->prev = temp->prev;
temp->prev->next = newnode;
temp->prev = newnode;

return head;

}
int main(){
    vector<int> arr={ 2,4,1,5};
    node* head = cv(arr);
     head = it(head,10);

    node* temp = head;

    while (temp)
    {
        /* code */cout<< temp-> data << " ";
        temp = temp-> next;
    }
    
}