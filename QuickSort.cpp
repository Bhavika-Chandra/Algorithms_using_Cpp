#include <iostream>
using namespace std;

void QuickSort(int a[10], int first, int last){
    int i,j,pivot,temp;
    if(first<last){
        pivot=first;
        i=first;
        j=last;
    while(i<j){
        while(a[i]<=a[pivot]){
        i++; }
        while(a[j]>a[pivot]){
            j--;
        }
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    temp=a[pivot];
    a[pivot]=a[j];
    a[j]=temp;
    
    QuickSort(a,first,j-1);
    QuickSort(a,j+1,last);
}}
void printArray(int *a, int n){
    cout<<"Array after sorting:";
    for (int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}

int main() {
    int n=10;
    int a[]={1, 5, 3, 13, 7, 3, 2, 15, 45, 20};
    QuickSort(a,0,n-1);
    printArray(a, n);
    return 0;
}
