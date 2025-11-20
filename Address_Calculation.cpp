#include <iostream>
using namespace std;

int main() {
    int base = 2000;  // base address
    int size = 4;     // size of int
    int rows = 3, cols = 4;  
    int i = 1, j = 2;

    int address = base + ((i * cols) + j) * size;

    cout << "Address of A[" << i << "][" << j << "] = " << address;

    return 0;
}

