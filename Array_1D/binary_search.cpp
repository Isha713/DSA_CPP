#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int target = 10;
    int start = 0;
    int end = sz-1;
    while(start<end){
        int mid = start+(end-start)/2;
        if(arr[mid]==target){
            cout<<"Element found at index "<<mid<<endl;
            break;
        }else if(arr[mid]<target){ 
            start = mid+1; 
        }else{ 
            end = mid-1; 
        }
    }
    if(start>end){
        cout<<"Element not found in the array"<<endl;
    }
    return 0;
}