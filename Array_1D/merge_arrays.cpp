#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of first array : ";
    int n1;
    cin>>n1;
    cout<<endl;
    int arr1[n1];
    cout<<"Enter the elements of first array : ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the size of second array : ";
    int n2;
    cin>>n2;
    cout<<endl;
    int arr2[n2];
    cout<<"Enter the elements of second array : ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int merged[n1+n2];
    for(int i=0;i<n1;i++){
        merged[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        merged[n1+i]=arr2[i];
    }
    cout<<"Merged array is : ";
    for(int i=0;i<n1+n2;i++){
        cout<<merged[i]<<" ";
    }
    return 0;
}