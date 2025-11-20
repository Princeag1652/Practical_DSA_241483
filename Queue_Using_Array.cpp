#include <iostream>
using namespace std;

#define MAX 100   // Maximum size of queue

class Queue {
private:
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(int x) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow! Cannot insert " << x << endl;
        } else {
            if (front == -1) front = 0; // first element inserted
            arr[++rear] = x;
            cout << x << " inserted into queue\n";
        }
    }
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! Nothing to delete\n";
        } else {
            cout << arr[front] << " deleted from queue\n";
            front++;
        }
    }
    void peek() {
        if (front == -1 || front > rear)
            cout << "Queue is empty\n";
        else
            cout << "Front element is: " << arr[front] << endl;
    }

 
    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    bool isFull() {
        return (rear == MAX - 1);
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty\n";
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.peek();
    q.dequeue();
    q.dequeue();

    q.display();

    if (q.isEmpty())
        cout << "Queue is empty now\n";

    return 0;
}
