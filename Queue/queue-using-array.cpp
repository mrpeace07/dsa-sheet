#include <bits/stdc++.h>
using namespace std;

class Queue {
    int *arr;
    int front;
    int rear;
    int maxSize;

public:
    // Constructor
    Queue(int size) {
        maxSize = size;
        arr = new int[maxSize];
        front = 0;
        rear = 0;
    }

    // Enqueue method
    void enqueue(int data) {
        if (rear == maxSize) {
            cout << "Queue is full" << endl;
        } else {
            arr[rear] = data;
            rear++;
        }
    }

    // Dequeue method
    void dequeue() {
        if (rear == front) {
            cout << "Queue is empty" << endl;
        } else {
            front++;
        }
    }

    // IsEmpty method
    bool isempty() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return true;
        } else {
            cout << "Queue is not empty" << endl;
            return false;
        }
    }

    // Front element method
    int getFront() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return -1; // Indicate that the queue is empty
        } else {
            return arr[front];
        }
    }

    void printQueue() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i < rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    // Destructor to free allocated memory
    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue q(5); // Initialize queue with size 5

    // Enqueue elements
    q.enqueue(2);
    q.enqueue(6);
    q.enqueue(3);
    q.enqueue(4);

    // Display the queue status
    q.isempty();

// Print all elements in the queue
    q.printQueue();

    // Display front element
    cout << "Front element: " << q.getFront() << endl;

    // Dequeue one element and display the front element
    q.dequeue();


    cout << "Front element after dequeue: " << q.getFront() << endl;

    // Dequeue remaining elements
    q.dequeue();
    q.dequeue();
    q.dequeue();
    
    // Attempt to dequeue from empty queue
    q.dequeue();

    // Check if the queue is empty
    q.isempty();

    // Attempt to get the front element from an empty queue

    return 0;
}
