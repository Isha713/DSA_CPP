#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of array : ";
    int n;
    cin>>n;
    cout<<endl;
    int arr[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"Not Sorted";
            return 0;
        }
    }
    cout<<"Sorted";
    return 0;
}