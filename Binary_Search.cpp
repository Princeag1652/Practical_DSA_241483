#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key;
    cout << "Enter size: ";
    cin >> n;

    for(int i=0;i<n;i++) cin >> arr[i];

    cout << "Enter key: ";
    cin >> key;

    int l=0, r=n-1, mid;
    while(l <= r){
        mid = (l+r)/2;
        if(arr[mid] == key){
            cout << "Found at index " << mid;
            return 0;
        }
        else if(arr[mid] < key) l = mid+1;
        else r = mid-1;
    }
    cout << "Not Found!";
}
