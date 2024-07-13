#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *back;

    node(int data1, node*next1, node*back1){
        data=data1;
        next=next1;
        back=back1;
    }

    // Constructor to initialize the node
    node(int data1)
    {
        data = data1;
        next = NULL;
        back = NULL;
    }


};

node *cv(vector<int> &arr)
{
    if (arr.empty()) return NULL;

    // Create the head node
    node* head = new node(arr[0]);
    node* prev = head;

    for(int i = 1; i < arr.size(); i++)
    {
        // Create a new node
        node* temp = new node(arr[i]);

        // Link the new node with the previous node
        prev->next = temp;
        temp->back = prev;

        // Move to the next node
        prev = temp;
    }

    return head;
}

int main()
{
    vector<int> arr = {2, 4, 3, 5}; // Initialize the vector with values
    node* head = cv(arr); // Create the doubly linked list
    
    // To check if the list is created correctly, print the list
    node* current = head;
    while (current != NULL)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
    
    return 0;
}


// #include <bits/stdc++.h> //we can initialsize both the pointers if we want in the data it can be useful in other problems
// using namespace std;

// struct node
// {
//     int data;
//     node *next;
//     node *back;

//     // Constructor to initialize data, next, and back
//     node(int data1, node* next1, node* back1)
//     {
//         data = data1;
//         next = next1;
//         back = back1;
//     }

//     // Constructor to initialize only the data
//     node(int data1)
//     {
//         data = data1;
//         next = NULL;
//         back = NULL;
//     }
// };

// node *cv(vector<int> &arr)
// {
//     if (arr.empty()) return NULL;

//     // Create the head node
//     node* head = new node(arr[0]);
//     node* prev = head;

//     for(int i = 1; i < arr.size(); i++)
//     {
//         // Create a new node using the constructor that initializes data, next, and back
//         node* temp = new node(arr[i], NULL, prev);

//         // Link the new node with the previous node
//         prev->next = temp;

//         // Move to the next node
//         prev = temp;
//     }

//     return head;
// }

// int main()
// {
//     vector<int> arr = {2, 4, 3, 5}; // Initialize the vector with values
//     node* head = cv(arr); // Create the doubly linked list
    
//     // To check if the list is created correctly, print the list
//     node* current = head;
//     while (current != NULL)
//     {
//         cout << current->data << " ";
//         current = current->next;
//     }
//     cout << endl;
    
//     return 0;
// }
