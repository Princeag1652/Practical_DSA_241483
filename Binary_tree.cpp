#include <iostream>
using namespace std;

int main(){
    int tree[100];
    int n;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i=1; i<=n; i++)
        cin >> tree[i];

    cout << "Binary Tree (Array Form): ";
    for(int i=1; i<=n; i++)
        cout << tree[i] << " ";
}
    