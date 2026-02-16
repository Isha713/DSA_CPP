#include<iostream>
using namespace std;
int main(){
    int arr[7] = {10,20,30,40,40,50,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<size-1;k++){
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    
}