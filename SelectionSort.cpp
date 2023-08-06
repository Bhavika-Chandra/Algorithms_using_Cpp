#include <iostream>
using namespace std;
int main() {
    int i,j,arr[10],swap,n,min;
    cout<<"Enter the number of elements for sorting:";
    cin>>n;
    cout<<"Enter the elements:";
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    for(i=0;i<n-1;i++){ min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
               min=j;
            }
        }
    swap=arr[i];
    arr[i]=arr[min];
    arr[min]=swap;
    }
    cout<<"Elements after sorting in ascending order:";
    for(i=0;i<n;i++){
    cout<<" "<<arr[i];
    }
    return 0;
}