#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int first = arr[0];
    for(int i=0;i<sz;i++){
        arr[i] = arr[i+1];
    }
    arr[sz-1] = first;
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
}