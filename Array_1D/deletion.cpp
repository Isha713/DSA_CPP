#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the total number of elements in array : ";
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The elements of array are : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pos;
    cout<<"Enter the position at which value is to be deleted : ";
    cin>>pos;
  
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"The array after deletion is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}