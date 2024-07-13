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

// Function to delete the first node from the linked list
node* deletion(node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

node* dl(node* head){
    node* temp = head;
    if(head == NULL || head-> next == NULL){
        return NULL;
    }else{
        
        while(temp->next->next != NULL){
            temp = temp->next;

        }
        
    }
    delete temp->next;
    temp-> next = NULL;

    return head;
}

int main() {
    vector<int> arr = {2, 3, 5, 6};
    node* head = cv(arr);
    
    // Delete the last node
    head = dl(head);
    
    // Print the elements of the linked list
    node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
