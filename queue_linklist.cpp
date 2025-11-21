#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() {
        front = NULL;
        rear = NULL;
    }
    void enqueue(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;
        if (rear == NULL) {  // empty queue
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << x << " inserted into queue\n";
    }
    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow! Nothing to delete\n";
            return;
        }
        Node* temp = front;
        cout << front->data << " deleted from queue\n";
        front = front->next;
        if (front == NULL) 
            rear = NULL;
        delete temp;
    }
    void peek() {
        if (front == NULL)
            cout << "Queue is empty\n";
        else
            cout << "Front element is: " << front->data << endl;
    }
    bool isEmpty() {
        return (front == NULL);
    }
    void display() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
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
