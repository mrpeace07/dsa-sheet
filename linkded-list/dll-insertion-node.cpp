#include <iostream>
#include <vector>
using namespace std;

// Node structure for doubly linked list
struct node {
    int data;
    node* next;
    node* prev;

    // Constructor with next and prev pointers
    node(int data, node* next = nullptr, node* prev = nullptr) {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
};

// Function to create a doubly linked list from a vector
node* cv(vector<int>& arr) {
    if (arr.empty()) {
        return nullptr;
    }

    // Create the head node
    node* head = new node(arr[0]);
    node* current = head;

    // Create subsequent nodes and link them
    for (size_t i = 1; i < arr.size(); ++i) {
        node* temp = new node(arr[i], nullptr, current);
        current->next = temp;
        current = temp;
    }

    return head;
}

// Function to insert a new node with data after a specific node
void insertAfter(node* temp, int data) {
    if (temp == nullptr) {
        cout << "Cannot insert after a null node." << endl;
        return;
    }

    node* newnode = new node(data);
    newnode->prev = temp;
    newnode->next = temp->next;
    if (temp->next != nullptr) {
        temp->next->prev = newnode;
    }
    temp->next = newnode;
}

int main() {
    // Example vector to create linked list: {2, 4, 1, 5}
    vector<int> arr = {2, 4, 1, 5};

    // Create the doubly linked list from the vector
    node* head = cv(arr);

    // Insert a new node with data 3 after the second node (4)
    if (head != nullptr && head->next != nullptr) {
        insertAfter(head->next, 3);
    }

    // Print the elements of the updated linked list
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Clean up memory by deleting all nodes
    temp = head;
    while (temp != nullptr) {
        node* next = temp->next;
        delete temp;
        temp = next;
    }

    return 0;
}
