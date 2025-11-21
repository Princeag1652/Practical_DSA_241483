#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() {
        head = NULL;
    }
    // Insert at end (for testing)
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void deleteByValue(int value) {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted node with value " << value << endl;
            return;
        }
        Node* current = head;
        Node* prev = NULL;
        while (current != NULL && current->data != value) {
            prev = current;
            current = current->next;
        }
        if (current == NULL) {
            cout << "Value not found in list\n";
            return;
        }
        prev->next = current->next;
        delete current;
        cout << "Deleted node with value " << value << endl;
    }
    void deleteByPosition(int position) {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }
        if (position == 1) { // delete head
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted node at position " << position << endl;
            return;
        }
        Node* current = head;
        Node* prev = NULL;
        for (int i = 1; i < position && current != NULL; i++) {
            prev = current;
            current = current->next;
        }
        if (current == NULL) {
            cout << "Position out of range\n";
            return;
        }
        prev->next = current->next;
        delete current;

        cout << "Deleted node at position " << position << endl;
    }
    void display() {
        if (head == NULL) {
            cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
int main() {
    SinglyLinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.display();
    list.deleteByValue(30);
    list.display();

    list.deleteByPosition(2);
    list.display();

    return 0;
}
