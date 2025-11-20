#include <iostream>
using namespace std;

class MaxHeap {
private:
    int arr[100];
    int size;
    void heapify(int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        // Check left child
        if (left < size && arr[left] > arr[largest])
            largest = left;
        if (right < size && arr[right] > arr[largest])
            largest = right;
        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(largest);
        }
    }

public:
    MaxHeap() {
        size = 0;
    }
    void insert(int value) {
        arr[size] = value;
        int i = size;
        size++;
        while (i != 0 && arr[(i - 1) / 2] < arr[i]) {
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }
    void buildHeap(int input[], int n) {
        size = n;
        for (int i = 0; i < n; i++)
            arr[i] = input[i];

        // Heapify from last non-leaf node
        for (int i = (size / 2) - 1; i >= 0; i--)
            heapify(i);
    }
    void printHeap() {
        cout << "Max Heap: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    MaxHeap h;
    h.insert(20);
    h.insert(15);
    h.insert(30);
    h.insert(40);
    h.insert(50);

    h.printHeap();

    // Build heap from existing array
    int arr[] = {12, 7, 9, 15, 20, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    MaxHeap h2;
    h2.buildHeap(arr, n);
    h2.printHeap();

    return 0;
}
