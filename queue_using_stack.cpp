#include <iostream>
using namespace std;

class QueueUsingStacks {
private:
    int stack1[100], stack2[100];
    int top1, top2;
public:
    QueueUsingStacks() {
        top1 = -1;
        top2 = -1;
    }
    void enqueue(int value) {
        if (top1 == 99) {
            cout << "Queue Overflow\n";
            return;
        }
        stack1[++top1] = value;
        cout << value << " inserted\n";
    }
    void dequeue() {
        if (top1 == -1 && top2 == -1) {
            cout << "Queue Underflow\n";
            return;
        }
        if (top2 == -1) {
            while (top1 != -1) {
                stack2[++top2] = stack1[top1--];
            }
        }
        cout << "Deleted: " << stack2[top2--] << endl;
    }
    void display() {
        if (top1 == -1 && top2 == -1) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        for (int i = top2; i >= 0; i--)
            cout << stack2[i] << " ";
        for (int i = 0; i <= top1; i++)
            cout << stack1[i] << " ";
        cout << endl;
    }
};
int main() {
    QueueUsingStacks q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(40);
    q.display();
    return 0;
}
