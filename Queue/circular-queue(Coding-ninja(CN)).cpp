

// #include <iostream>
// using namespace std;

// class CircularQueue {
// private:
//     int* arr;   // Array to store elements of the queue
//     int size;   // Maximum size of the queue
//     int front;  // Front index of the queue
//     int rear;   // Rear index of the queue

// public:
//     // Constructor to initialize the queue with a given size
//     CircularQueue(int n) {
//         size = n + 1;  // Allocate space for one extra element to differentiate between full and empty condition
//         arr = new int[size];
//         front = 0;
//         rear = 0;
//     }

//     // Enqueues 'X' into the queue. Returns true if successful, false if queue is full.
//     bool enqueue(int value) {
//         // Check if the queue is full
//         if ((rear + 1) % size == front) {
//             return false; // Queue is full
//         } else {
//             arr[rear] = value;          // Store the value at rear
//             rear = (rear + 1) % size;   // Move rear circularly
//             return true;
//         }
//     }

//     // Dequeues the element at the front of the queue. Returns -1 if queue is empty.
//     int dequeue() {
//         // Check if the queue is empty
//         if (front == rear) {
//             return -1; // Queue is empty
//         } else {
//             int dequeued = arr[front];  // Get the element at front
//             front = (front + 1) % size; // Move front circularly
//             return dequeued;
//         }
//     }
// };

#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        //to check whther queue is full
        if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) ) {
            //cout << "Queue is Full";
            return false;
        }
        else if(front == -1) //first element to push
        {
			front = rear = 0;
            
        }
        else if(rear == size-1 && front != 0) {
            rear = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            rear++;
        }
        //push inside the queue
        arr[rear] = value;
        
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front == -1){//to check queue is empty
            //cout << "Queue is Empty " << endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear) { //single element is present
            front = rear = -1;
        }
        else if(front == size - 1) {
            front = 0; //to maintain cyclic nature
        }
        else
        {//normal flow
            front++;
        }
        return ans;
    }
};
