#include <iostream>
using namespace std;
int main() {
    int i,j,arr[10],swap,n;
    cout<<"Enter the number of elements for sorting:";
    cin>>n;
    cout<<"Enter the elements:";
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }
    cout<<"Elements after sorting in ascending order:";
    for(j=0;j<n;j++){
    cout<<" "<<arr[j];
    }
    return 0;
}