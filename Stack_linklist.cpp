#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;   // stack initially empty
    }

    // Push operation
    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;
        cout << x << " pushed into stack\n";
    }

    // Pop operation
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow! Nothing to pop\n";
        } else {
            Node* temp = top;
            cout << top->data << " popped from stack\n";
            top = top->next;
            delete temp;
        }
    }

    // Peek (Top element)
    void peek() {
        if (top == NULL) {
            cout << "Stack is empty\n";
        } else {
            cout << "Top element is: " << top->data << endl;
        }
    }

    // Check if empty
    bool isEmpty() {
        return (top == NULL);
    }

    // Display stack elements
    void display() {
        if (top == NULL) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            Node* temp = top;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();
    s.pop();

    s.display();

    if (s.isEmpty())
        cout << "Stack is empty now\n";

    return 0;
}
