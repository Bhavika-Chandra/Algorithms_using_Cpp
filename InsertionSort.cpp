#include<iostream>
using namespace std;

int main(){
    int i,j,arr[10],key,n;
    cout<<"Enter no. of elements for the array:";
    cin>>n;
    cout<<"Enter the elements:";
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    cout<<"Sorted array is:";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}