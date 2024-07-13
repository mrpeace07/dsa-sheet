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

// Function to convert vector to linked list
node* cv(vector<int>& arr) {
    if (arr.empty()) {
        return nullptr;
    }
    node* head = new node(arr[0]);
    node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Function to insert a new node at a specific position in the linked list
node* inp(node* head, int val, int key) {
    node* newnode = new node(val);
    if (head == nullptr) { //for value this will not mean anything so return null;
        return newnode;
    }
    if (key == 0) { //head->data = val
        newnode->next = head; //node* temp = new node(val,head ) return temp;
        return newnode;
    }

    node* temp = head;
    for (int i = 0; i < key - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        // If key is greater than the length of the list, do nothing
        return head;
    }

    newnode->next = temp->next;
    temp->next = newnode;

    return head;
}

int main() {
    vector<int> arr = {2, 3, 5, 6};
    node* head = cv(arr);

    // Insert a new node with value 8 at position 2
    head = inp(head, 8, 2);

    // Print the elements of the linked list
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
