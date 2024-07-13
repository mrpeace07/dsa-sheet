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

node* inh(node* head, int val) {
    node* newNode = new node(val);
    if (head == nullptr) {
        return newNode;
    }
    node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}


int main() {
    vector<int> arr = {2, 3, 5, 6};
    node* head = cv(arr);
    
    // insert in the first node
    head = inh(head,100);
    
    // Print the elements of the linked list
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}