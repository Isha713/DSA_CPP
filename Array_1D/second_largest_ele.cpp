#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {10,-20,30,-40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest = arr[i];
        }
        else if(arr[i]>second_largest && arr[i]!=largest){
            second_largest = arr[i];    
        }
    }
    cout<<"Second largest element: "<<second_largest;
    return 0;
}