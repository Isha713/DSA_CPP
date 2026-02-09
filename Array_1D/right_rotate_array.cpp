#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int last = arr[sz-1];
    for(int i=sz;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    for(int i=0;i<sz;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}