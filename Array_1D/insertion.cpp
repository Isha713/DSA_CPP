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
    int pos,val;
    cout<<"Enter the position at which value is to be inserted : ";
    cin>>pos;
    cout<<"Enter the value which is inserted : ";
    cin>>val;
    for(int i=n;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    n++;
    cout<<"The array after insertion is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
    return 0;
}