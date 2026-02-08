#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,-30,-40,50};
    int size =sizeof(arr)/sizeof(arr[0]);
    int start=0;
    int end=size-1;
    
    while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
    }
    cout<<"Swapped array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}