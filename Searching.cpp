#include <iostream>
using namespace std;

int binarySearch(int a[], int low, int high, int x) {
    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if (x == a[mid]) {
        return mid;
    } else if (x < a[mid]) {
        return binarySearch(a, low, mid - 1, x);
    } else {
        return binarySearch(a, mid + 1, high, x);
    }
}

int linearSearch(int a1[], int key, int size, int i) {
    if (i == size) {
        return -1;
    }
    if (key == a1[i]) {
        return i;
    } else {
        return linearSearch(a1, key, size, i + 1);
    }
}

int main() {
    int n;
    cout<<"Enter no. of elements:";
    cin >> n;
    int arr[n], key;
    cout << "Enter array in sorted order:";
    for (int j = 0; j < n; j++) {
        cin >> arr[j];
    }
    cout << "Enter key to search in the array:";
    cin >> key;
    int low = 0, high = n - 1;
    int choice;
    cout << "Enter 1 for binary and 2 for linear search:";
    cin >> choice;
    switch (choice) {
        case 1: {
            int index = binarySearch(arr, low, high, key);
            if (index != -1) {
                cout << "Key found at index: " << index;
            } else {
                cout << "Key not found in the array";
            }
            break;
        }
        case 2: {
            int index = linearSearch(arr, key, n, 0);
            if (index != -1) {
                cout << "Key found at index: " << index;
            } else {
                cout << "Key not found in the array";
            }
            break;
        }
        default:
            cout << "Invalid choice";
    }
    return 0;
}
