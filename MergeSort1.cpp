#include <iostream>
using namespace std;

//merging of two sorted arrays into another array
void Merge(int a[],int b[],int c[],int m,int n){
    int i,j,k;
    i=j=k=0;
    while(i<m&&j<n){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++; k++;
        }
        else{
            c[k]=b[j];
            j++; k++;
        }
    }
    while(j<n){
        c[k]=b[j];
        k++; j++;
    }
     while(i<m){
        c[k]=a[i];
        k++; i++;
    }
}
void printArr(int *c,int l){
    cout<<"Sorted array is:";
    for(int k=0;k<l;k++){
        cout<<c[k]<<" ";
    }
}

int main() {
    int m=10, n=10;
    int l=20;
    int a[]={2,4,6,8,10,12,14,16,18,20};
    int b[]={1,3,5,7,9,11,13,15,17,19};
    int c[20];
    Merge(a,b,c,m,n);
    printArr(c,l);
    return 0;
}