#include<iostream>
using namespace std;

int main(){
    int i,n=10,f,l,m,input;
    int array[n];
    cout<<"Enter total number of elements:";
    cin>>n;
    cout<<"Enter elements of array:";
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter a number to search:";
    cin>>input;
    f=0;
    l=n-1;
    m=(f+l)/2;
    while(f<=l){
        if(input<array[m]){
            l=m-1;
            m=(f+l)/2;
        }
        else if(input==array[m]){
            cout<<"Number found at %d position."<<(m+1);
            break;
        }
        else{
            f=m+1;
            m=(f+l)/2;
        }
    }
    if(f>l){
        cout<<"Number not found!";
    }
    return 0;
}
