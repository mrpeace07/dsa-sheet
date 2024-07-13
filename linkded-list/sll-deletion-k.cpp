#include<bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

// Define the node structure
struct node {
    int data;
    node* next;

    node(int data1, node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

node* cv ( vector<int> &arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;

}

node* dp( node* head, int k){
    if ( head == NULL) return head;

    if ( k == 1 /*head-> data*/){
        node* temp = head;
        head = head-> next;
        free(temp);
        return head;
    }

    int count=0; 
    node*temp = head;
    node* prev = NULL;

while(temp != NULL){
    count++;
    if(count == k){// temp-> data == ele
        prev->next = prev->next->next;
        free(temp);
        break;
    }

    prev= temp;
    temp= temp->next;
}
    

    
return head;

}

int main() {
    vector<int> arr = {2, 3, 5, 6};
    node* head = cv(arr);
    
    // Delete the first node
    head = dp(head,3);
    
    // Print the elements of the linked list
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}