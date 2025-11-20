#include <iostream>
using namespace std;

int main() {
    int arr[100], n, pos, val;

    cout << "Enter size: ";
    cin >> n;

    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Enter position and value to insert: ";
    cin >> pos >> val;

    for(int i=n;i>=pos;i--) arr[i]=arr[i-1];
    arr[pos]=val;
    n++;

    cout << "After Insertion: ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";

    cout << "\nEnter position to delete: ";
    cin >> pos;

    for(int i=pos;i<n-1;i++) arr[i]=arr[i+1];
    n--;

    cout << "After Deletion: ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
}
