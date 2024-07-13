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

// Function to insert a new node before a node with a specific value
node* inp(node* head, int val, int key) {
    node* newnode = new node(val);
    if (head == nullptr) {
        return newnode; // If the list is empty, return the new node as the head
    }

    // If the node to insert before is the head
    if (head->data == key) {
        newnode->next = head;
        return newnode;
    }

    node* temp = head;
    node* prev = nullptr;

    // Traverse the list to find the node with the specified value
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the node with the specified value is found
    if (temp != nullptr) {
        prev->next = newnode;
        newnode->next = temp;
    }

    return head; // Return the head of the list
}

int main() {
    vector<int> arr = {2, 3, 5, 6};
    node* head = cv(arr);

    // Insert a new node with value 8 before the node with value 5
    head = inp(head, 8, 5);

    // Print the elements of the linked list
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
