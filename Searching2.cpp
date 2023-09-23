#include <iostream>
using namespace std;

int binarysearch(int a[], int l, int h, int key){
    int mid = (l+h)/2;
    if(l>h){
        //Element not found
        return -1;
    }
    else if(key==a[mid]){
        cout<<"Element found at index:"<<mid;
    }
    else if(key<a[mid]){
        binarysearch(a, l, mid-1, key);
    }
    else{
        binarysearch(a, mid+1, h, key);
    }
}
int linearsearch(int a1[], int key, int i, int n){
    if(i==n){
        //Element not found
        return -1;
    }
    else if(key==a1[i]){
        cout<<"Element found at index:"<<i;
    }
    else{
        linearsearch(a1, key, i+1, n);
    }
    
}
int main() {
    int n, key, j;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for(j=0;j<n;j++){
    cin>>arr[j];
    }
    cout<<"Enter the element to search for:";
    cin>>key;
    int choice;
    cout<<"Enter 1 for binary search and 2 for linear search:";
    cin>>choice;
    switch(choice){
        case 1:{
        binarysearch(arr, 0, n-1, key);
        int index = binarysearch(arr, 0, n-1, key);
        if(index==-1){
            cout<<"Element not found!";
        }
        break;
        }
        case 2:{
        linearsearch(arr, key, 0, n);
        int index = linearsearch(arr, key, 0, n);
        if(index==-1){
            cout<<"Element not found!";
        }
        break;
        }
        default:{
            cout << "Invalid choice!";
        }
    }
    return 0;
}
