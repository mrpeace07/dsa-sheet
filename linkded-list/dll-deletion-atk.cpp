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

node* dk(node* head, int k) {
    if (head == NULL || head->next == NULL) return head;

    node* temp = head;

    int count = 1;

    // Traverse to the k-th node
    while (temp != NULL && count < k) {
        temp = temp->next;
        count++;
    }

    // If k is greater than the number of nodes, do nothing
    if (temp == NULL) return head;

    // If the node to be deleted is the head node
    if (temp == head) {
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
        return head;
    }

    // If the node to be deleted is the last node
    if (temp->next == NULL) {
        temp->prev->next = NULL;
        delete temp;
        return head;
    }

    // For nodes in the middle  // we can also use back and front to make it easy
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    delete temp;

    return head;
}

int main(){
    vector<int> arr={ 2,4,1,5};
    node* head = cv(arr);
     head = dk(head, 1);

    node* temp = head;

    while (temp)
    {
        /* code */cout<< temp-> data << " ";
        temp = temp-> next;
    }
    
}

// node* dk(node* head, int k) {
//     if (head == NULL || head->next == NULL) return head;

//     node* temp = head;
//     int count = 1;

//     // Traverse to the k-th node
//     while (temp != NULL && count < k) {
//         temp = temp->next;
//         count++;
//     }

//     // If k is greater than the number of nodes, do nothing
//     if (temp == NULL) return head;

//     // If the node to be deleted is the head node
//     if (temp == head) {
//         head = head->next;
//         if (head != NULL) {
//             head->back = NULL;
//         }
//         delete temp;
//         return head;
//     }

//     // If the node to be deleted is the last node
//     if (temp->next == NULL) {
//         temp->back->next = NULL;
//         delete temp;
//         return head;
//     }

//     // For nodes in the middle
//     node* back = temp->back;
//     node* front = temp->next;

//     back->next = front;
//     front->back = back;

//     delete temp;

//     return head;
// }
